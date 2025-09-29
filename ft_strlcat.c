#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    src_len = ft_strlen(src);

    if(dstsize == 0)
        return(src_len);

    dest_len = ft_strlen(dest);

    if(dest_len >= dstsize)
    {
        return(dstsize + src_len);
    }
    i = 0;
    while(src[i] && (dest_len + i) < (dstsize - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return(dest_len + src_len);
}

#include <stdio.h>

int main(void)
{
    char dst[20];
    char dst2[10];
    size_t result;
    
    // Test 1: Normal case
    ft_strlcpy(dst, "Hello", sizeof(dst));
    result = ft_strlcat(dst, " World!", sizeof(dst));
    printf("Result: '%s' (returned: %zu)\n", dst, result);
    // Output: "Hello World!" (returned: 12)
    
    // Test 2: Truncation
    ft_strlcpy(dst2, "Hello", sizeof(dst2));
    result = ft_strlcat(dst2, " World!", sizeof(dst2));
    printf("Result: '%s' (returned: %zu)\n", dst2, result);
    // Output: "Hello Wo" (returned: 12) - truncated!
    
    // Test 3: Empty destination
    dst[0] = '\0';
    result = ft_strlcat(dst, "Hello", sizeof(dst));
    printf("Result: '%s' (returned: %zu)\n", dst, result);
    // Output: "Hello" (returned: 5)
    
    return (0);
}