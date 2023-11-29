/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:50:06 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:03 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_substr.
** 
** Parameters :
** s : The string from which to create the substring.
** start : The start index of the substring in the string ’s’.
** len : The maximum length of the substring.
** 
** Return value :
** The substring. NULL if the allocation fails.
** 
** Description :
** Allocates (with malloc(3)) and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_calloc(sizeof(char), 1));
	if (len > (s_len - start))
		len = (s_len - start);
	while (start > 0 && *s)
	{
		s++;
		start--;
	}
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while (i < len && s[i])
	{
		substring[i] = s[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
#include <stdio.h>
int main()
{
    char const *str = "hello there you jackass";
    char const *str2 = there";
    printf("%s\n", ft_substr(str, 2, 30));
    // printf("%s\n", ft_substr(str, 7, 10));
    // printf("%s\n", ft_substr(str, 30, 10));
    // printf("%s\n", ft_substr(str, 20, 10));
    // printf("%s\n", ft_substr(str, 1, 0));
    //printf("%s\n", ft_substr(str2, 1, 10));
    return 0;
}
*/