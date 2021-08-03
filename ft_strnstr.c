/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:33:18 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/03 17:02:01 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	char	*nptr;
	char	*hptr;

	hptr = (char *)haystack;
	nptr = (char *)needle;
	if (needle[0] == 0)
		return (0);
	if (ft_strlen(haystack) > len)
		hptr[len] = '\0';
	return (0);
}