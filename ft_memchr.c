/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:52:43 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/09 19:01:28 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "Hello, world,";
	int c = '?';
	size_t n = 0;

	char *p1 = memchr(str, c, n);
	char *p2 = ft_memchr(str, c, n);
	printf("Lib's:%s\n", p1);
	printf("Mine's:%s\n", p2);
	return 0;
}*/
