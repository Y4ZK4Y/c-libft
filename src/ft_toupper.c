/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <ykarimi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:47:00 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:48:46 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of toupper - lower case to upper case letter conversion.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** If the argument is a lower-case letter, the toupper() function returns the 
** corresponding upper-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}