/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:56:43 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/09 18:56:53 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (*s2 && *s1 && len > 0)
	{
		while (s1[i + k] == s2[k] && len--)
			k++;
		if (s2[k] == '\0')
			return ((char *)&s1[i]);
		i++;
		len--;
	}
	return (NULL);
}

/*int main()
{
	char str1[] = "aaabcabcd";
	char str2[] = "aaabc";

	printf("Lib's:  %s\n", strnstr(str1, str2, 5));
	printf("Mine's: %s\n", ft_strnstr(str1, str2, 5));
	return 0;
}*/
