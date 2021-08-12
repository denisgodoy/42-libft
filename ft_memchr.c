/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:14:44 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/12 00:02:45 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if ((unsigned char)c == '\0')
		return ((unsigned char *)&s[ft_strlen(s)]);
	while (*str != '\0' && n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (0);
}
