/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:13:49 by xiruwang          #+#    #+#             */
/*   Updated: 2023/05/07 21:02:17 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (c == 0)
        return ((char *)s); // 已经到了'\0'
    return (NULL);
}

// int main()
// {
//     char str[] = "Hello, world,";
//     int c = ',';

//     printf("Lib's:%s\n", strchr(str, c));
//     printf("Mine's:%s\n", ft_strchr(str, c));
//     return 0;
// }