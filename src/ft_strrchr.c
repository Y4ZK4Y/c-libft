/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <ykarimi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:57:15 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/12/05 14:36:09 by yasamankari   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of strrchr - Locate charachter in string.
** Standard C Library (libc, -lc)
** #include <string.h>
** function returns a pointer to the last occurrence of  the character c in 
** the string s.
** return a pointer  to  the  matched character  or NULL if the character 
** is not found.  The terminating null byte is considered part of the 
** string, so that if  c  is  specified  as
** '\0', these functions return a pointer to the terminator.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	ch;
	size_t	i;

	ch = (char)c;
	ptr = (char *)s;
	i = 0;

	if (ch == '\0')
		return (ft_strchr(s, '\0'));

	while (s[i] != '\0')
	{
		if (s[i] == ch)
			ptr = s + i;
		i++; 
	}
	if (*ptr == ch)
		return (ptr);
	return (NULL);
}