/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:22:02 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:04 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of strchr - Locate character in string
** Standard C Library (libc, -lc)
** #include <string.h>
** The strchr() function returns a pointer to the first occurrence of the 
** character c in the string s.
** returns a pointer  to  the  matched character  or NULL if the character 
** is not found.  The terminating null byte is considered part of the 
** string, so that if  c  is  specified  as
** '\0', these functions return a pointer to the terminator.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>
#include <string.h>


int main () {
   const char str[] = "some random string";

   const char ch = 'm';
   const char ch2 = 0;

   char *ret1;
   char *ret11;

   char *ret2;
   char *ret22;

   ret1 = strchr(str, ch);
   ret11 = strchr(str, ch2);
   ret2 = ft_strchr(str, ch);
   ret22 = ft_strchr(str, ch2);

    printf("original function: \n");
   printf("String after |%c| is - |%s|\n", ch, ret1);
   printf("address of pointer: %p\n\n", &ret1);
   printf("String after |%c| is - |%s|\n", ch2, ret11);
   printf("address of pointer: %p\n\n", &ret11);

    printf("Custom function: \n");
   printf("String after |%c| is - |%s|\n", ch, ret2);
   printf("address of pointer: %p\n", &ret2);
   printf("String after |%c| is - |%s|\n", ch2, ret22);
   printf("address of pointer: %p\n\n", &ret2);
   
   return(0);
}
*/
