/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:57:15 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:14 by ykarimi       ########   odam.nl         */
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
	const char	*s_end;

	s_end = s;
	s_end = s_end + ft_strlen(s);
	while (*s_end != (unsigned char)c && s_end != s)
		s_end--;
	if (*s_end == (unsigned char)c)
		return ((char *)s_end);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
   const char str[] = "some random string";

   const char ch = 'm';
   const char ch2 = '\0';

   char *ret1;
   char *ret11;

   char *ret2;
   char *ret22;

   ret1 = strrchr(str, ch);
   ret11 = strrchr(str, ch2);
   ret2 = ft_strrchr(str, ch);
   ret22 = ft_strrchr(str, ch2);

    printf("Original function: \n");
   printf("String after |%c| is - |%s|\n", ch, ret1);
   //printf("address of pointer: %p\n\n", &ret1);
   printf("String after |%c| is - |%s|\n", ch2, ret11);
   //printf("address of pointer: %p\n\n", &ret11);

    printf("ft_strrchr: \n");
   printf("String after |%c| is - |%s|\n", ch, ret2);
   //printf("address of pointer: %p\n", &ret2);
   printf("String after |%c| is - |%s|\n", ch2, ret22);
   //printf("address of pointer: %p\n\n", &ret2);
   
   return(0);
}
*/
