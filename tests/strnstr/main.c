
#include <stdio.h>
#include <string.h>
int main()
{
    const char *haystack = "Hello, world! This is a test string.";
    const char *needle1 = "world";
    const char *needle2 = "test";
    const char *needle3 = "nonexistent";
    const char *empty_needle = "";
    const char *empty_haystack = "";
    const char *haystack_with_null = "Hello, world!'\0'. This is a.";

    // Test cases with haystack and needles
    char *result1 = strnstr(haystack, needle1, strlen(haystack));
    char *result11 = ft_strnstr(haystack, needle1, strlen(haystack));

    char *result2 = strnstr(haystack, needle2, strlen(haystack));
    char *result22 = ft_strnstr(haystack, needle2, strlen(haystack));

    char *result3 = strnstr(haystack, needle3, strlen(haystack));
    char *result33 = ft_strnstr(haystack, needle3, strlen(haystack));
    
    // Test case with an empty needle
    char *result4 = strnstr(haystack, empty_needle, strlen(haystack));
    char *result44 = ft_strnstr(haystack, empty_needle, strlen(haystack));
    
    // Test case with an empty haystack
    char *result5 = strnstr(empty_haystack, needle1, 0);
    char *result55 = ft_strnstr(empty_haystack, needle1, 0);

    // size is small
    char *result6 = strnstr(haystack, needle1, 3 );
    char *result66 = ft_strnstr(haystack, needle1, 3 );

    char *result7 = strnstr(haystack, needle1, 0 );
    char *result77 = ft_strnstr(haystack, needle1, 0 );

    char *result8 = strnstr(haystack_with_null, needle2, \
	strlen(haystack_with_null));
    char *result88 = ft_strnstr(haystack_with_null, needle2,\
	 strlen(haystack_with_null));

    //char *result9 = strnstr(haystack_with_null, needle1, \
	strlen(haystack_with_null));
    //char *result99 = ft_strnstr(haystack_with_null, needle1,\
	 strlen(haystack_with_null));



    printf("normal test - original: %s\n",result1);
    printf("normal test - Custom: %s\n\n",result11);

    printf("normal test - original: %s\n",result2);
    printf("normal test - Custom: %s\n\n",result22);

    printf("needle no exist - original: %s\n",result3);
    printf("needle no exist - Custom: %s\n\n",result33);

    printf("empty needle - original: %s\n",result4);
    printf("empty needle - Custom: %s\n\n",result44);

    printf("empty haystack - original: %s\n",result5);
    printf("empty haystack - Custom: %s\n\n",result55);

    printf("needle exist but size smol(3) -original: %s\n",result6);
    printf("needle exist but size smol(3) - Custom: %s\n\n",result66);

    printf("needle exist but size 0 - original: %s\n",result7);
    printf("needle exist but size 0 - Custom: %s\n\n",result77);

    printf("haystack has a null surpsise - original: %s\n",result8);
    printf("haystack has a null surpsise - Custom: %s\n\n",result88);

    //printf("haystack has a null surpsise but needle occurs first -\
	 original: %s\n",result9);
    //printf("haystack has a null surpsise but needle occurs first -\
	 Custom: %s\n\n",result99);

    return(0);
}