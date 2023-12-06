/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <ykarimi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:15:05 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:51:47 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of isprint printing character test (space character inclusive)
** Standard C Library (libc, -lc)
** #include <ctype.h>
** The isprint() function tests for any printing character, including space 
** (‘ ’).  The value of the argument must be representable as an unsigned char 
** or the value of EOF.
** The isprint() function returns zero if the character tests false and 
** returns non-zero if the character tests true.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}