/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:05:58 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/26 13:06:17 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include "libft.h"

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
/*(unsigned char *)s: cast then dereference to get its value
*/

int	main(void)
{
	char *str[10];
	int c = 49;
	printf("%s\n", (char *)ft_memset(str, c, 5));
	return 0;
}
