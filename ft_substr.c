/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:50:37 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/17 23:42:43 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*ptr;
	size_t	strlen;

	if (!s)
		return (0);
	strlen = ft_strlen(s);
	if (start > strlen)
	{
		len = 0;
		start = strlen;
	}
	else if (start + len > strlen)
		len = strlen - start;
	ptr = (char *)malloc(len + 1 * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
