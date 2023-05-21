/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:04:56 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 18:30:36 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	ret = malloc(count * size);
	if (ret == NULL)
		return (ret);
	ft_bzero(ret, size * count);
	return (ret);
}

/*int main(void)
{
    size_t size = 10;
    int *arr = (int *)ft_calloc(size, sizeof(int));

    for (size_t i = 0; i < size; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}*/
