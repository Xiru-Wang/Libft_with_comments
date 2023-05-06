#include <string.h>
#include <stdio.h>

/*在使用ft_memcmp函数比较两个内存块时，
循环判断的条件是*p1 == *p2 && --n，
其中的--n保证了循环次数不会超过指定的长度n，
因此不用额外检查*p1和*p2是否为\0，因为n已经限定了循环的次数，
循环过程中一旦遇到\0就会立即停止循环。需要注意的是，当n为0时，ft_memcmp应该返回0。

memcmp 可以用来比较任意两个内存区域的值，而不仅限于字符串，而 strcmp 只能比较字符串。
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    while (*p1 == *p2 && --n)
    {
        p1++;
        p2++;
    }
    return (*p1 - *p2);
}

int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "HEllo, world!";

    printf("Mine:%d, Lib's:%d\n", ft_memcmp(str1, str2, 1), memcmp(str1, str2, 1));
    return 0;
}