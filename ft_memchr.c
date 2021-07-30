/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:14:44 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/30 19:30:41 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void	*s, int	c, unsigned long int	n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (n == 0)
		return (0);
	if (n >= ft_strlen(s) + 1)
		return (ft_strchr(s, (unsigned char)c));
	while (*str && n)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
		n--;
	}
	return (0);
}
