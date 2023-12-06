#include "../../include/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char *test1 = "12345";
    const char *test2 = "0";
    const char *test3 = "-42";
    const char *test4 = "   678";
    const char *test5 = "   +123";
    const char *test6 = "   -456";
    const char *test7 = "   12abc";
    const char *test8 = "   123 456";
    const char *test9 = "   99999999999999999999";
    const char *test10 = "   -99999999999999999999";
    const char *test11 = "2147483647";
    const char *test12 = "-2147483648";
    const char *test13 = " +-456";
    const char *test14 = "          \n678";

    printf("Test 1: \n");
    printf("\n%d\n", atoi(test1));
    printf("%d\n\n", ft_atoi(test1));


    printf("Test 2: \n");
    printf("%d\n", atoi(test2));
    printf("%d\n\n", ft_atoi(test2));

    printf("Test 3: \n");
    printf("%d\n", atoi(test3));
    printf("%d\n\n", ft_atoi(test3));

    printf("Test 4: \n");
    printf("%d\n", atoi(test4));
    printf("%d\n\n", ft_atoi(test4));

    printf("Test 5: \n");
    printf("%d\n", atoi(test5));
    printf("%d\n\n", ft_atoi(test5));

    printf("Test 6: \n");
    printf("%d\n", atoi(test6));
    printf("%d\n\n", ft_atoi(test6));

    printf("Test 7: \n");
    printf("%d\n", atoi(test7));
    printf("%d\n\n", ft_atoi(test7));

    printf("Test 8: \n");
    printf("%d\n", atoi(test8));
    printf("%d\n\n", ft_atoi(test8));

    printf("Test 9: \n");
    printf("%d\n", atoi(test9));
    printf("%d\n\n", ft_atoi(test9));

    printf("Test 10: \n");
    printf("%d\n", atoi(test10));
    printf("%d\n\n", ft_atoi(test10));

    printf("Test 11: \n");
    printf("%d\n", atoi(test11));
    printf("%d\n\n", ft_atoi(test11));

    printf("Test 12: \n");
    printf("%d\n", atoi(test12));
    printf("%d\n\n", ft_atoi(test12));
    
    printf("Test 13: \n");
    printf("%d\n", atoi(test13));
    printf("%d\n\n", ft_atoi(test13));

    printf("Test 14: \n");
    printf("%d\n", atoi(test14));
    printf("%d\n\n", ft_atoi(test14));

    return 0;
}