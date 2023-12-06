#include "../../include/libft.h"
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World! 123";
    printf("Original String: %s\n", test_string);

    printf("Using standard isalpha:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isalpha(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isalpha:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isalpha(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}