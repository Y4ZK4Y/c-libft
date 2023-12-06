#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World!\n";
    printf("Original String: %s", test_string);

    printf("Using standard isprint:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isprint(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isprint:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isprint(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}