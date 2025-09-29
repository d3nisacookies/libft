#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s1 = "1231231";
    char *s2 = "           i am going to die";
    char *result = ft_strjoin(s1, s2);

    printf("ft_strjoin : %s\n", result);
    return 0;
}
