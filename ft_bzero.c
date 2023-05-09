/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:47:28 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/09 18:59:25 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	void	*ret;

	ret = s;
	if (n == 0)
		return (ret);
	while (n--)
		*(unsigned char *)s++ = 0;
	return (ret);
}

/*int main(void)
{
	char str1[100] = "Hello, world!";
	char str2[100] = "Hello, world!";

	// Use memset to initialize str1
	memset(str1, 0, sizeof(str1));
	// Use ft_bzero to initialize str2
	ft_bzero(str2, sizeof(str2));

	// Compare the results
	if (memcmp(str1, str2, sizeof(str1)) == 0)
		printf("ft_bzero works correctly.\n");
	else
		printf("ft_bzero does not work correctly.\n");

	return 0;
}

当我们在处理二进制数据时，使用unsigned char类型的指针更为合适。
由于它们不具有符号位，因此可以避免在进行位运算或进行其他操作时出现意外的错误。
此外，在使用malloc等动态内存分配函数分配内存时，
分配的是未初始化的内存，因此使用unsigned char类型的指针进行初始化会更为安全和可靠。
*/
