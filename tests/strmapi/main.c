
// some function for testing purposes
char modify_char(unsigned int index, char c) {
    // Modify the character by adding the index (as an ASCII offset)
    if (c >= 'a' && c <= 'z') {
        // If it's a lowercase letter, add the index as an offset
        c = ((c - 'a' + index) % 26) + 'a';
    } else if (c >= 'A' && c <= 'Z') {
        // If it's an uppercase letter, add the index as an offset
        c = ((c - 'A' + index) % 26) + 'A';
    }
    // For other characters, don't modify them
    return c;
}

#include <stdio.h>
int main() {
    char input[] = "Hello, World!";
    
    // Test ft_strmapi with the modify_char function
    char *result = ft_strmapi(input, modify_char);

    if (result) {
        printf("Original string: %s\n", input);
        printf("Modified string: %s\n", result);
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}