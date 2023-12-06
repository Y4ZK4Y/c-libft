#include "../../include/libft.h"
#include <stdio.h>
int main()
{
    int a = 123;
    int b = -123;
    long int c = 2147483648;
    long int d = -2147483648;
    int e = 0;

    printf("Number '%d' to character : '%s'\n", a, ft_itoa(a));
    printf("Number '%d' to character : '%s'\n", b, ft_itoa(b));
    printf("Number '%ld' to character: '%s'\n", c, ft_itoa(c));
    printf("Number '%ld' to character : '%s'\n", d, ft_itoa(d));
    printf("Number '%d' to character : '%s'\n", e, ft_itoa(e));
    

    return (0);
}