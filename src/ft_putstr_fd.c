/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <ykarimi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:26:51 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:16 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_putstr_fd.
** 
** Parameters :
** s : The string to output.
** fd : The file descriptor on which to write.
** 
** Return value : 
** None.
** 
** Description :
** Outputs the string ’s’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == 0 || *s == 0)
		return ;
	while (*s)
	{
		write(fd, s, ft_strlen(s));
	}
}