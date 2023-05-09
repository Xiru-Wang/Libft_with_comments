/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:22:03 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/09 18:24:40 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*ret;

	ret = s;
	while (n--)
	{
		*(unsigned char *)s = (unsigned char)c;
		s++;
	}
	return (ret);
}
/*(unsigned char *)b 是将指针 b 指向的地址强制转换为 unsigned char 类型
并取出该地址上的值。这个操作先将指针 b 强制转换为 unsigned char 指针，然后再用 * 取值。
void类型的指针，不能进行算术运算和解引用操作
*/
