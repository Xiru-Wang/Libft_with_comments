/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:11:09 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/09 18:11:46 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

/* int main(void)
{
    char str[] = "-+ 42";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));

    return 0;
}
*/
/*
Normal atoi NOT 42 ATOI
把字母数字转换成整数
The atoi() function converts the initial portion of the string pointed to
     by str to int representation.
*/
