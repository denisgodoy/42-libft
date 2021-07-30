/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:29:04 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/30 18:38:22 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, unsigned long int	n)
{
	if (n > 0)
		return (ft_strncmp(s1, s2, n));
	return (0);
}
