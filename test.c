#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    const char *tests[] = {
        "Hello, world!",
        "",
        "A",
        "This is a longer string to test strdup."
    };

    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        char *dup = ft_strdup(tests[i]);
        if (!dup)
        {
            printf("ft_strdup returned NULL\n");
            continue;
        }

        printf("Original: \"%s\"\n", tests[i]);
        printf("Duplicate: \"%s\"\n", dup);

        // Check if the addresses are different
        if (dup != tests[i])
            printf("Memory check: Separate allocation yes\n");
        else
            printf("Memory check: Same address no\n");

        printf("\n");
        free(dup);
    }

    return 0;
}
