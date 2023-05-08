#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    unsigned int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s1)
{
    char *ret;
    size_t i;

    if (s1 == NULL)
        return (NULL);
    ret = (char *)malloc((strlen(s1) + 1) * sizeof(char));
    i = 0;
    while (s1[i])
    {
        ret[i] = s1[i];
        i++;
    }
    ret[i] = 0;

    return (ret);
}
