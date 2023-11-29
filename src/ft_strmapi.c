/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:05:42 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:28 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_strmapi.
** 
** Parameters : 
** s : The string on which to iterate.
** f : The function to apply to each character.
** 
** Return value :
** The string created from the successive applications of ’f’.
** Returns NULL if the allocation fails.
**
** Description :
** Applies the function ’f’ to each character of the string ’s’, and 
** passing its
** index as first argument to create a new string (with malloc(3)) 
** resulting from successive applications of ’f’.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*result;

	s_len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (s_len + 1));
	if (!result)
		return (NULL);
	while (i < s_len && s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[s_len] = '\0';
	return (result);
}
/*
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
*/
