/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:14:44 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/31 21:23:41 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (str && n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (0);
}