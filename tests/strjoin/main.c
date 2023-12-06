#include <stdio.h>
int main()
{
    // char const *str1 = "hello";
    // char const *str2 = "there";
    // char *rez;
    // rez = ft_strjoin(str1, str2);
    // printf("%s", rez);

    // Expected result: "HelloWorld"
    char *result = ft_strjoin("Hello", "World");
    printf("Expected result: 'HelloWorld'   :'%s'\n\n", result);

    // Expected result1: "World"
    char *result1 = ft_strjoin(NULL, "World");
    printf("Expected result1: 'World'       :'%s'\n\n", result1);

    // Expected result2: "Hello"
    char *result2 = ft_strjoin("Hello", NULL);
    printf("Expected result2: 'Hello'      :'%s'\n\n", result2);

    // Expected result3: NULL
    char *result3 = ft_strjoin(NULL, NULL);
    printf("Expected result3: NULL       :'%s'\n\n", result3);

    // Expected result4: "World"
    char *result4 = ft_strjoin("", "World");
    printf("Expected result4: 'World'       :'%s'\n\n", result4);

    // Expected result5: "Hello"
    char *result5 = ft_strjoin("Hello", "");
    printf("Expected result5: 'Hello'       :'%s'\n\n", result5);

    // Expected result6: ""
    char *result6 = ft_strjoin("", "");
    printf("Expected result6: ''       :'%s'\n\n", result6);

    // Expected result7: "Hello, World!"
    char *result7 = ft_strjoin("Hello, ", "World!");
    printf("Expected result7: 'Hello, World!'   :'%s'\n\n", result7);

    // Expected result8: "123$$"
    char *result8 = ft_strjoin("123", "$$");
    printf("Expected result8: '123$$''   :'%s'\n\n", result8);

    // Expected result9: NULL
    char *result9 = ft_strjoin("This is a very long string", " with a \
	lot of characters that may cause allocation failure.");
    printf("Expected result9(long string, mem allocation failure):\
	 NULL   :'%s'\n\n", result9);

    return 0;
}