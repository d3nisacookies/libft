// Have you even test this ?
#include "libft.h"

int isalnum(int c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
}

#include <stdio.h>
int main()
{
	printf("%d\n", isalnum('a'));
}
