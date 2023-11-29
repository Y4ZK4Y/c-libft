/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 12:26:11 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:51:11 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of ft_lstnew 
** 
** Parameters : 
** content : The content to create the node with.
**
** Return value :
** The new node.
**
** Description :
** Allocates (with malloc(3)) and returns a new node. The member variable
** ’content’ is initialized with the value of the parameter ’content’. 
** The variable ’next’ is initialized to NULL.
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
