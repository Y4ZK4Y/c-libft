#include "../../include/libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "This is the original string.";
    char custom[] = "This is the custom string.";

    // Testing with a sample string
    printf("Original String: %s\n", original);
    printf("Custom String: %s\n", custom);

    // Using original bzero and ft_bzero
    bzero(original, sizeof(original));
    ft_bzero(custom, sizeof(custom));

    // Verify the results
    printf("After original bzero:\n");
    printf("Original String: %s\n", original);
    printf("After ft_bzero:\n");
    printf("Custom String: %s\n", custom);

    // Edge case: Empty string
    char empty_string[] = "";
    printf("Empty String before ft_bzero: '%s'\n", empty_string);
    ft_bzero(empty_string, 0);  // Should do nothing
    printf("Empty String after ft_bzero: '%s'\n", empty_string);

    return 0;
}