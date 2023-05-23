/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:06:19 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/22 22:03:01 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}

/*
int main()
{
    char dst[11] = "abcdefghkl";
    char src[] = "123456789a";

    char dst1[11] = "abcdefghkl";
    char src1[] = "123456789a";
    size_t n = sizeof(dst);
    printf("Lib's:%lu\n", strlcpy(dst, src, 1));
    printf("Lib's:%s\n", dst);
    printf("Mine:%lu\n", ft_strlcpy(dst1, src1, 1));
    printf("Mine:%s\n", dst1);

    return 0;
}*/

/*
该函数将src字符串的内容拷贝到dst缓冲区中，最多拷贝dstsize-1个字符，
同时保证目标字符串以NULL字符结尾。如果src字符串的长度大于等于dstsize，
则目标字符串不会被完全复制，但仍会以NULL字符结尾。
strlen(src)<= dsize -1时候就完全复制了
*/
