/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
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
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*
int main()
{
    char *str = "hello";
    ft_putstr_fd(str, 1);
    return (0);
}
*/
