#include "libft.h"

char *ft_strmapi(char *s, char (*f)(unsigned int ,char))
{
    unsigned int    i;
    char            *result;

    result = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!result)
    {
        return (NULL);
    }
    i = 0;
    while (i < ft_strlen(s))
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return result;
}