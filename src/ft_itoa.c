/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:15:42 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:51:42 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_itoa.
** 
** Parameters :
** n : the integer to convert.
** 
** Return value :
** The string representing the integer. 
** NULL if the allocation fails.
*
** Description :
** Allocates (withm alloc(3)) and returns a string representing the integer
**  received as an argument.
** Negative numbers must be handled.
*/
#include "libft.h"

static int	get_digits(int nb)
{
	long long	n;
	int			count;

	count = 0;
	if (nb == 0)
		return (1);
	n = nb;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	write_number(char *result, long long num, \
						int digits, int is_negative)
{
	result[digits] = '\0';
	if (is_negative)
		result[0] = '-';
	while (digits > is_negative)
	{
		result[digits - 1] = (char)(num % 10 + '0');
		num /= 10;
		digits--;
	}
}

char	*ft_itoa(int n)
{
	long long int	num;
	int				digits;
	int				is_negative;
	char			*result;

	is_negative = 0;
	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		is_negative = 1;
		if (n == INT_MIN)
			num = -(long long)INT_MIN;
		else
			num = -n;
	}
	result = malloc(sizeof(char) * (digits + 1));
	if (!result)
		return (NULL);
	write_number(result, num, digits, is_negative);
	return (result);
}
/*
#include <stdio.h>
int main()
{
    int a = 123;
    int b = -123;
    long int c = 2147483648;
    long int d = -2147483648;
    int e = 0;

    printf("Number '%d' to character : '%s'\n", a, ft_itoa(a));
    printf("Number '%d' to character : '%s'\n", b, ft_itoa(b));
    printf("Number '%ld' to character: '%s'\n", c, ft_itoa(c));
    printf("Number '%ld' to character : '%s'\n", d, ft_itoa(d));
    printf("Number '%d' to character : '%s'\n", e, ft_itoa(e));
    

    return (0);
}
*/
