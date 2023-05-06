#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int i;
    int k;

    i = 0;
    k = 0;
    // if (*s2 == 0)
    //     return ((char *)s1);
    while (len-- && *s1)
    {
        while (s1[i + k] == s2[k] && *s2)
            k++;
        if (s2[k] == '\0')
            // return ((char *)s1 + i); //+i not k. to remeber the 1st postion found s2
            return ((char *)&s1[i]);
        i++;
    }
    return (NULL);
}

int main()
{
    char str1[] = "Hello, world,";
    char str2[] = "wo";

    printf("Lib's:  %s\n", strnstr(str1, str2, sizeof(str1)));
    printf("Mine's: %s\n", ft_strnstr(str1, str2, sizeof(str1)));
    return 0;
}