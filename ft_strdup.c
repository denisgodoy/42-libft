/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:44:12 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/11 16:30:47 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1) + 1;
	ptr = (char *)malloc(size);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, size);
	return (ptr);
}
