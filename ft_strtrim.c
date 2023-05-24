/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:01:23 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/24 18:19:51 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_char_in_set(char c, char const *set)
{
	while (*set)//set not str, sequence does not matter
	{
		if (*set == c)// as long as c is in the set
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ret;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_char_in_set(s1[start], set))//check from start if 1st char is in the set.Found:trim
		start++;
	while (start < end && ft_char_in_set(s1[end - 1], set))//check one by one from behind. Found:trim
		end--;
	ret = (char *)malloc(sizeof(char) * (end - start + 1));// how many chars left + 1 = trimmed string
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		ret[i++] = s1[start++];
	ret[i] = 0;
	return (ret);
}

/*int	main(void)
{
	char	str1[] = "abcdefgcc";
	char	str2[] = "acbe";
	//char	str3[] = "ac";
	char	*trimmed;
	// char	str4[] = "de";

	trimmed = ft_strtrim(str1, str2);
	printf("%s\n", trimmed);
	free(trimmed);
	//printf("%s\n", ft_strtrim(str1, str3));
	//printf("%s\n", ft_strtrim(str1, str4));

	return (0);
}*/
