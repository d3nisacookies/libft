#include "libft.h"

int ft_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}
// oh damn, what does <- do ?
// oh wait... it break your function.
//omg
#include <stdio.h>
int main()
{
	printf("%d\n",ft_isdigit('1'));
}
