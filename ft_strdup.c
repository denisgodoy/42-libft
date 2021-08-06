/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:44:12 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/06 17:32:18 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1) + 1;
	if (!s1)
		return (0);
	ptr = (char *)malloc(size);
	ft_memcpy(ptr, s1, size);
	return (ptr);
}
