/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 12:27:44 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:51:22 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_lstdelone
** 
** Parameters : 
** lst : The node to free.
** del : The address of the function used to delete the content.
**
** Return value :
** None.
**
** Description :
** Takes as a parameter a node and frees the memory of
** the node’s content using the function ’del’ given as a parameter 
** and free the node. The memory of ’next’ must not be freed.
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
