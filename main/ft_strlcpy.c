/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:44:25 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/28 16:44:30 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<bsd/string.h>

int	main(void)
{
	int		size;
	char	string_dst[100] = "Hello ";
	char	string_src[100] = "42 World";
	char	string_dst2[100] = "Hello ";
	char	string_src2[100] = "42 World";

	size = 10;
	printf ("ft_strlcpy return: %zu\n", ft_strlcpy(string_dst, string_src, size));
	printf ("strlcpy return: %zu\n", strlcpy(string_dst2, string_src2, size));
	printf ("ft_strlcpy: %s\n", string_dst);
	printf ("strlcpy: %s\n", string_dst2);	
	return (0);
}
