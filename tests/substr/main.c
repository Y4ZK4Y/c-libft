#include "../../include/libft.h"
#include <stdio.h>
int main()
{
    char const *str = "hello there you jackass";
    char const *str2 = "there";
    printf("%s\n", ft_substr(str, 2, 30));
    // printf("%s\n", ft_substr(str, 7, 10));
    // printf("%s\n", ft_substr(str, 30, 10));
    // printf("%s\n", ft_substr(str, 20, 10));
    // printf("%s\n", ft_substr(str, 1, 0));
    //printf("%s\n", ft_substr(str2, 1, 10));
    return 0;
}