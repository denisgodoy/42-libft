/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:55:41 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/28 15:30:25 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

unsigned long int	ft_strlcat(
	char	*dst,
	const char	*src,
	unsigned long int	dstsize)
{
	unsigned long int	curr_size;
	unsigned long int	i;
	
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
