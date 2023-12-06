#include "../../include/libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "Hello,world,this,is,a,test";
    char **result = ft_split(str, ',');

    if (!result)
    {
        printf("Splitting failed\n");
        return 1;
    }

    for (size_t i = 0; result[i] != NULL; i++)
    {
        printf("substring %lu: %s\n", i, result[i]);
        free(result[i]);
    }

    free(result);
    return 0;
}