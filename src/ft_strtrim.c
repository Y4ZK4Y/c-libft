/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:52:17 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:08 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_strtrim.
** 
** Parameters :
** s1 : The string to be trimmed.
** set : The reference set of characters to trim.
** 
** Return value : 
** The trimmed string.
** NULL if the allocation fails.
**
** Description :
** Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
** specified in ’set’ removed
** from the beginning and the end of the string
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	s1_len;

	trimmed_str = NULL;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
	{
		trimmed_str = malloc(1);
		if (!trimmed_str)
			return (NULL);
		trimmed_str[0] = '\0';
		return (trimmed_str);
	}
	while (s1_len && ft_strchr(set, s1[s1_len - 1]) != NULL)
		s1_len--;
	trimmed_str = malloc(sizeof(char) * (s1_len +1));
	if (!trimmed_str)
		return (NULL);
	ft_memcpy(trimmed_str, s1, s1_len);
	trimmed_str[s1_len] = '\0';
	return (trimmed_str);
}
/*

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
*/
