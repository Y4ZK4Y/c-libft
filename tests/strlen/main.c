#include <stdio.h>
#include <string.h>
int main() {
    // Test cases
    const char *test_strings[] = {
        "Hello",
        "Testing",
        "",
        "Hello World",
        "Hello\tWorld\n",
        "@#$%^&*()",
        "你好世界",
        "Hello\0World",  // String with a null terminator in the middle
        NULL,            // NULL pointer
    };

    // Expected results (from standard strlen)
    size_t expected_results[] = {
        strlen("Hello"),
        strlen("Testing"),
        strlen(""),
        strlen("Hello World"),
        strlen("Hello\tWorld\n"),
        strlen("@#$%^&*()"),
        strlen("你好世界"),
        5,  // strlen("Hello\0World") returns 5
        0,  // strlen(NULL) is undefined behavior
    };

    for (size_t i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); i++) {
        const char *test_str = test_strings[i];
        size_t expected = expected_results[i];
        
        printf("Test Case %ld:\n", i + 1);
        printf("Input String: \"%s\"\n", test_str);

        // Testing custom_strlen
        size_t result = ft_strlen(test_str);
        printf("ft_strlen Result: %zu\n", result);
        printf("ft_strlen %s\n", (result == expected) ? "PASSED" : "FAILED");

        // Testing standard strlen
        size_t standard_result = strlen(test_str);
        printf("Standard strlen Result: %zu\n", standard_result);
        printf("Standard strlen %s\n", (standard_result == expected)\
		 ? "PASSED" : "FAILED");

        printf("\n");
    }

    return 0;
}