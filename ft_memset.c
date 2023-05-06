#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
    void *ret;

    ret = b;
    while (len--)
    {
        *(unsigned char *)b = (unsigned char)c;
        b++;
    }
    return (ret);
}
//*(unsigned char *)b 是将指针 b 指向的地址强制转换为 unsigned char 类型
// 并取出该地址上的值。这个操作先将指针 b 强制转换为 unsigned char 指针，然后再用 * 取值。