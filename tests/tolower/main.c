#include "../../include/libft.h"
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World";
    printf("Original String: %s\n", test_string);

    printf("Using standard tolower:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(tolower(test_string[i]));
    }
    putchar('\n');

    printf("Using ft_tolower:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(ft_tolower(test_string[i]));
    }
    putchar('\n');

    return 0;
}