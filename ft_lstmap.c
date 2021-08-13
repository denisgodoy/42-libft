/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 19:30:32 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/13 20:42:12 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	int		i;
	t_list	*new;
	t_list	*node;

	i = ft_lstsize(lst);
	while (i)
	{
		node = ft_lstnew((*f)(lst->content));
		ft_lstadd_front(&new, node);
		lst = lst->next;
		i--;
	}
	(*del)(lst);
	free(lst);
	return (new);
}
