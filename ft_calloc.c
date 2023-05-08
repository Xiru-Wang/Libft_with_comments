#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ret;

    ret = malloc(count * size);
    if (ret == NULL)
        return (ret);
    ft_bzero(ret, size * count);
    return (ret);
}

// int main(void)
// {
//     size_t size = 10;
//     int *arr = (int *)ft_calloc(size, sizeof(int));

//     for (size_t i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     free(arr);
//     return 0;
// }