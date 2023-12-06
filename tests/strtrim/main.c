#include "../../include/libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    const char *input1 = "  \t  Trim this string   \t  ";
    const char *set1 = " \t";
    char *trimmed_str1 = ft_strtrim(input1, set1);
    printf("Input 1: \"%s\"\n", input1);
    printf("Trimmed 1: \"%s\"\n\n", trimmed_str1);
    free(trimmed_str1);

    // Test with a string that is already trimmed
    const char *input2 = "ThisStringIsNotTrimmed";
    const char *set2 = " ";
    char *trimmed_str2 = ft_strtrim(input2, set2);
    printf("Input 2: \"%s\"\n", input2);
    printf("Trimmed 2: \"%s\"\n\n", trimmed_str2);
    free(trimmed_str2);

    // Test with an empty string
    const char *input3 = "";
    const char *set3 = " ";
    char *trimmed_str3 = ft_strtrim(input3, set3);
    printf("Input 3: \"%s\"\n", input3);
    printf("Trimmed 3: \"%s\"\n\n", trimmed_str3);
    free(trimmed_str3);

    return 0;
}