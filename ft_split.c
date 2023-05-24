/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:38:58 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/24 11:53:35 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
steps:
1. Go thru the str, count how many words inside of the string:count_words()
2. count the length of each word in order to allocate
3. loop thru the string, use the same logic (step 1)to copy and put each word: put_word()
4. handle allocation failed for each word: handle_malloc_err()
5. End 1-d with a NULL pointer
*/

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)//skip 'c'
			s++;
		if (*s)
		{
			count++;//count + 1 when encounter a word (not c)
			while (*s && *s != c)//skip the word
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
	while (s[len] && s[len] != c)//count the lenth of the each word (for malloc)
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
		free(words[i]);//free 2-d
		i++;
	}
	free(words);// free 1-d
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
		while (*s == c)//skip spaces
			s++;
		if (*s)
		{
			words[i] = put_word(s, c);//encounter the word
			if (words[i] == NULL)//if one of words allocation failed, free all words
				return (handle_malloc_err(words));//necessary to pass the strict tester
			i++;//1st dimensional + 1
			while (*s && *s != c)//prepare for the next word
				s++;//pass the rest part of the str to the same loop
		}
	}
	words[i] = NULL;//The array must end with a NULL pointer.
	return (words);
}

/*
int main()
{
	//char input[] = " a bb";
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
*/
