/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:50:37 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/10 19:53:09 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s);
	if (start > size)
		start = size;
	if (len > size)
		len = size;
	ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (0);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
