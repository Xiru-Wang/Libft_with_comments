/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:06:19 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/26 13:25:34 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
Return the length of src
Note: take the full size of the buffer (not just the length)
在目标字符串的缓冲区大小受限的情况下，可以确保复制不会导致缓冲区溢出，同时保证目标字符串以空字符结尾。
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)//size: sizeof(dst) NOT strlen(dst)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && src[i])// NOT (i < size -1), when size = 0, 0-1 will become the max number of size_t
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)// when size = 1, there's only one space for 0
		dst[i] = 0;
	while (src[i])//count the rest of src(if there is)
		i++;
	return (i);
}


int main()
{
    //char dst[11] = "abc";
    //char src[] = "123456789a";

    char dst1[11] = "abc";
    char src1[] = "123456789AB";
    size_t n = sizeof(dst1);
    //printf("Lib's:%zu\n", strlcpy(dst, src, 1));
    //printf("Lib's:%s\n", dst);
	printf("strlen(dst):%zu, strlen(src): %zu\n", strlen(dst1), strlen(src1));
	printf("sizeof(dst):%zu, sizeof(src):%zu\n", n, sizeof(src1));
    printf("strlcpy returns:%zu\n", ft_strlcpy(dst1, src1, n));
    printf("after strlcpy, dest is:%s, strlen is : %zu\n", dst1, strlen(dst1));

    return 0;
}

/*
该函数将src字符串的内容拷贝到dst缓冲区中，最多拷贝dstsize-1个字符，
同时保证目标字符串以NULL字符结尾。如果src字符串的长度大于等于dstsize，
则目标字符串不会被完全复制，但仍会以NULL字符结尾。
strlen(src)<= dsize -1时候就完全复制了
*/
