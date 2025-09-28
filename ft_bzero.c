#include <unistd.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

	// what the f are you trying to do here ?
	// earlier saying this is defined as an unsigned char *,
	// suddenly becomes a char * wtf, why ?
	// fucking useless but why not
    ptr = (unsigned char *)s;

	// this is the worst fucking while loop I have seen
	//
	while (n > 0)
	{
		*ptr = '\0';
		n--;
		ptr++;
	}
}

 #include <stdio.h>

 int main(void)
 {
     char buffer[10];

     ft_bzero(buffer, sizeof(buffer));

     for (size_t i = 0; i < sizeof(buffer); i++)
     {
         printf("%c ", buffer[i]);
     }
     return 0;
 }
