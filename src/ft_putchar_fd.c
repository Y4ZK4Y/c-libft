/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:26:39 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:31 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft)putchar_fd.
**
** Parameters :
** c : The character to output
** fd : The file descriptor on which to write.
** 
** Return value :
** None.
** 
** Description :
** Outputs the character ’c’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    char c = 'a';
    ft_putchar_fd(c, 1);
    return 0;
}
*/
