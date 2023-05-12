/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:38:58 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/12 20:58:23 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
1. count how many words(how many lines)
2. malloc and put chars in each line with a NULL
3. The array must end with a NULL pointer
*/

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while(*s)
	{
		while (*s == c)//skip c
			s++;
		if (*s)
		{
			count++;//1 loop, 1 word count
			while (*s && *s != c)//skip the rest
				s++;
		}
	}
	return (count);
}

char	*put_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;//return 2d array
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1)); //allocate arrays
	if (words == NULL)//check if allocate success
		return (NULL);
	while (*s)
	{
		while (*s == c)//skip the delimiter c
			s++;
		if (*s)
		{
			words[i] = put_word(s,c);
			i++;
			while(*s && *s != c)
				s++;
		}
	}
	words[i] = 0;//The array must end with a NULL pointer
	return (words);
}

// int main()
// {
// 	char input[] = " a bb";
// 	char **result = ft_split(input, ' ');
// 	int i;

// 	// Accessing individual strings in the array
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return 0;
// }
