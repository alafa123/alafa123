/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:40:40 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:36:53 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * - Description:
 * Deletes the given node and every successor of that node, usign the
 * function 'del'.
 * Finally, the pointer to the list must be set to NULL.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * del: The address of the function used to delete the content of the node.
 *
 * - Return value:
 * None
**/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
