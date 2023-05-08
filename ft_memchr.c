#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    // if (n == 0)
    //     return 0; 因为n==0时候return null
    while (n--)
    {
        if (*p == (unsigned char)c)
            return ((void *)p);
        p++;
    }
    return (NULL);
}

// int main()
// {
//     char str[] = "Hello, world,";
//     int c = '?';
//     size_t n = 0;

//     char *p1 = memchr(str, c, n);
//     char *p2 = ft_memchr(str, c, n);
//     printf("Lib's:%s\n", p1);
//     printf("Mine's:%s\n", p2);
//     return 0;
// }