/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 12:28:16 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:40:50 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_lstiter
** 
** Parameters : 
** lst : The address of a pointer to a node.
** f : The address of the function used to iterate on the list.
**
** Return value :
** None.
**
** Description :
** Iterates the list ’lst’ and applies the function ’f’ on the content of 
** each node.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
