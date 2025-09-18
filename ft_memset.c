#include <unistd.h>

void *ft_memset(void *s, int c, size_t len)
{
    unsigned char *ptr;
    unsigned char value;

	// damn I forgot what these two lines mean
	// but it looks like there are actually
	// essential..
	ptr = (unsigned char *)s;
    value = (unsigned char)c;


    while (len-- > 0)
    {
        *ptr++ = value;
    }
    return (char *)s;
}

 #include <stdio.h>

 int main(void)
 {
     char buffer[10];
  
     ft_memset(buffer, 'A', sizeof(buffer));
  
     for (size_t i = 0; i < sizeof(buffer); i++)
     {
         printf("%c ", buffer[i]);  // Output: A A A A A A A A A A //
     }
     return 0;
 }
