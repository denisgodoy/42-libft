/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:08:48 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/31 21:23:58 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void	*b, int	c, size_t	len)
{
	char	*str;

	str = &b[0];
	while (len--)
		*(str++) = (unsigned char)c;
	return (b);
}
