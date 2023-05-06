#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i; // cannot be size_t,否则n=-1时成最大值while循环物无止尽

    i = strlen(s);
    if (c == 0)
        return ((char *)s + i); // 直接return最后一个‘\0'
    while (i >= 0)              //=0, 才会iterate到index[0]
    {
        if (s[i] == (char)c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}

int main()
{
    char str[] = "Hello";
    int c = '.';

    printf("Lib's: %s\n", strrchr(str, c));
    printf("Mine's: %s\n", ft_strrchr(str, c));
    return 0;
}