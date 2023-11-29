/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:33:35 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:22 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_putnbr_fd.
** 
** Parameters : 
** n : The integer to output.
** fd : The file descriptor on which to write.
**
** Return value :
** None.
**
** Description : 
** Outputs the integer ’n’ to the given file descriptor.
*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
	{
		ft_putchar_fd(((nbr % 10) + '0'), fd);
	}
}
/*
#include <stdio.h>
int main()
{
	int num = 42;
    int num2 = -42;
    int num3 = 0;
    int num4 = -2147483648 ;
    long int num5 = 2147483648 ;
    
	ft_putnbr_fd(num, 1);
    printf("\n");
	ft_putnbr_fd(num2, 1);
    printf("\n");
    ft_putnbr_fd(num3, 1);
    printf("\n");
    ft_putnbr_fd(num4, 1);
    printf("\n");
	ft_putnbr_fd(num5, 1);
	return 0;
}
*/
