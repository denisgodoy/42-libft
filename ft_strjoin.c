/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:56:33 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/10 16:47:29 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(size);
	if (ptr == '\0')
		return (0);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcat(ptr, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (ptr);
}
