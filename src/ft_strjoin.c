/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:14:54 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:49 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_strjoin.
** 
** Parameters : 
** s1 : The prefix string.
** s2 : The suffix string.
**
** Return value :
** The new string. NULL if the allocation fails.
**
** Description :
** Allocates (with malloc(3)) and returns a new string, which is the result of 
** the concatenation of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*concatenated_str;
	size_t	total_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	concatenated_str = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (concatenated_str);
}
/*
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
*/
