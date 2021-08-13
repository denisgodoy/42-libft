/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 18:16:09 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/13 20:38:37 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstclear(t_list	**lst, void	(*del)(void *))
{
	t_list	*node;

	node = *lst;
	while (node != 0)
	{
		node = node->next;
		del(node);
	}
	free(node);
	*lst = NULL;
}
