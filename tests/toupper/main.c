#include "../../include/libft.h"
#include <stdio.h>
#include <ctype.h>

int main() {
    const char *test_string = "Hello World";
    printf("Original String: %s\n", test_string);

    printf("Using standard toupper:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(toupper(test_string[i]));
    }
    putchar('\n');

    printf("Using ft_toupper:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(ft_toupper(test_string[i]));
    }
    putchar('\n');

    return 0;
}