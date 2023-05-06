/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:45:05 by xiruwang          #+#    #+#             */
/*   Updated: 2023/05/04 10:51:26 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
// 符号位the sign bit:范围-128~127,有可能出现补码负数
// without sign bit(unsigned char):0~255, 包含了extend ASCII
int main()
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello,  ";

	printf("Mine:%d, Lib's:%d\n", ft_strcmp(str1, str2), strcmp(str1, str2));
	return 0;
}