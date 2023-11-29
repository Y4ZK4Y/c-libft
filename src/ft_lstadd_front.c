/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 12:26:37 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:51:34 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_lstadd_front 
** 
** Parameters : 
** lst: The address of a pointer to the first link of a list.
** new : The address of a pointer to the node to be added to the list.
**
** Return value :
** None
**
** Description :
** Adds the node ’new’ at the beginning of the list.
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
