/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:27:02 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:27 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_putendl_fd.
** 
** Parameters :
** s : The string to output.
** fd : The file descriptor on which to write.
** 
** Return value :
** None.
** 
** Description :
** Outputs the string ’s’ to the given file descriptor followed by a newline.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
int main()
{
    char *str = "hello!";
    ft_putendl_fd(str, 1);

    return 0;
}
*/
