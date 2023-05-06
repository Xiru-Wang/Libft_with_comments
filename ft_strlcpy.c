#include <string.h>
#include <stdio.h>

/*
1. 将源字符串中n个字符拷贝到目标字符串中
2. strlcpy返回值是源字符串的长度

与strcpy不同，strlcpy函数会在拷贝src后自动在dst末尾添加一个 null（'\0'），
保证dst是一个合法的 C 字符串，可以安全地用于后续的操作。

与 strncpy 函数不同，strlcpy 函数不会在dest末尾添加多余的 null 字符，
因此可以确保dest始终有一个合法的 null 终止符，并且不会超过指定的长度。
这使得 strlcpy 函数在处理字符串时更加安全可靠。

这个返回值的作用是告诉调用函数，源字符串实际上有多长，
以便在分配目标缓冲区时使用正确的长度。此外，该返回值还可用于确定是否发生了缓冲区截断。
如果返回值与目标缓冲区的大小相同，那么源字符串被完全复制到了目标缓冲区??
否则目标缓冲区截断了源字符串。
*/
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t i;

    i = 0;
    while (--dstsize && src[i]) // while (i < (dstsize - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i]) // 需要增加另一个while循环来计算源字符串的长度,从而避免了遗漏未复制的字符
        i++;
    return (i);
}