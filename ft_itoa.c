/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:05:58 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/23 10:47:07 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);//stop, return 1 space for 0
	if (n < 0)
		i++; // i = 1; space for '-' sign
	while (n != 0)
	{
		n = n / 10;//count how many digits
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*ret;
	size_t			len;
	unsigned int	num;// in order to hold +2147483648

	len = num_len(n);
	if (n < 0)
		num = -n;
	else
		num = n;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ret[len] = 0;//'\0' terminator
	while (len > 0)
	{
		ret[len - 1] = num % 10 + '0';//get the last digit then cast to char
		num = num / 10;//prepare for next iteration
		len--;
	}
	if (n < 0)
		ret[0] = '-';
	return (ret);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = -42;
	b = -2147483648;
	c = 2147483647;
	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));
	printf("%s\n", ft_itoa(c));
	return (0);
}*/
