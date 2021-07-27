/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:21:04 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/26 23:06:32 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	int			size;
	const char	*string;

	size = ft_strlen(s);
	string = &s[size];
	while (*(--string))
		if (*string == (char)c)
			return ((char *)string);
	return (0);
}
