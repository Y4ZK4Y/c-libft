#include "../../include/libft.h"
#include <stdio.h>

// Sample function to use with ft_striteri
void modify_characters(unsigned int index, char *c) {
    // Modify the character (e.g., increment its ASCII value by the index)
    *c = *c + index;
}

int main() {
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);

    ft_striteri(str, modify_characters);

    printf("Modified string: %s\n", str);

    return 0;
}