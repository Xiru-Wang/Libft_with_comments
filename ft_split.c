/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:38:58 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/16 20:49:39 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
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

char	**handle_malloc_err(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (words == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words[i] = put_word(s, c);
			if (words[i] == NULL)
				return (handle_malloc_err(words));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	words[i] = 0;
	return (words);
}

/*
int main()
{
	char input[] = " a bb";
	//char **result = ft_split(input, ' ');
	char **result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	int i;

	// Accessing individual strings in the array
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}
//The array must end with a NULL pointer
*/
