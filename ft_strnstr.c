/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:33:18 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/02 22:31:56 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	char 	*ptr;
	char	*nptr;
	char	*hptr;
	
	hptr = (char *)haystack;
	nptr = (char *)needle;
	if (needle[0] == 0)
		return (0);
	if (ft_strlen(haystack) > len)
	{
		hptr[len] = '\0';
		while (len--)
		{
			if (*nptr == '\0')
				nptr = (char *)needle;
			ptr = ft_strchr(hptr, *nptr);
			if (ptr != '\0')
				if (ft_strncmp(ptr, needle, ft_strlen(nptr)) == 0)
					return (ptr);
			nptr++;
			hptr++;
		}
	}
	return (0);
}
