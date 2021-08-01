/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:53:06 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/31 21:04:41 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	curr_size;
	size_t	i;

	curr_size = ft_strlen(dst);
	i = 0;
	if (dstsize >= curr_size)
	{
		while (i < dstsize - curr_size - 1 && src[i] != '\0')
		{
			dst[curr_size + i] = src[i];
			i++;
		}
		dst[curr_size + i] = '\0';
		return (curr_size + ft_strlen(src));
	}
	return (dstsize + curr_size + 2);
}
