/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:50:37 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/17 10:10:02 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*ptr;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start > size)
		start = size;
	if (len > size)
		len = size;
	ptr = (char *)malloc(len + 1 * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
