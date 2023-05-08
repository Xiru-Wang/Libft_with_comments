#include <string.h>
#include <stdio.h>

/*
该函数将src字符串的内容拷贝到dst缓冲区中，最多拷贝dstsize-1个字符，
同时保证目标字符串以NULL字符结尾。如果src字符串的长度大于等于dstsize，
则目标字符串不会被完全复制，但仍会以NULL字符结尾。
strlen(src)<= dsize -1时候就完全复制了
*/
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;

    i = 0;

    while (i + 1 < dstsize && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    if (i < dstsize) // NUL-terminating the result if dstsize is not 0
        dst[i] = 0;
    while (src[i]) // 避免遗漏未复制的字符
        i++;
    return (i);
}

// int main()
// {
//     char dst[11] = "abcdefghkl";
//     char src[] = "123456789a";

//     char dst1[11] = "abcdefghkl";
//     char src1[] = "123456789a";
//     size_t n = sizeof(dst);
//     printf("Lib's:%lu\n", strlcpy(dst, src, 1));
//     printf("Lib's:%s\n", dst);
//     printf("Mine:%lu\n", ft_strlcpy(dst1, src1, 1));
//     printf("Mine:%s\n", dst1);
//     printf("if Strlen(src):%lu <= sizeof(dst):(%lu - 1),那src被完全复制了,否则发生了截断\n", strlen(src), n);

//     return 0;
// }