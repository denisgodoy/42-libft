/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:40:51 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/04 19:50:50 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = i;
	ptr = (char *)malloc(ft_strlen(s1));
	while (s1[i] != '\0')
	{
		if (s1[i] != *set)
			ptr[j++] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
