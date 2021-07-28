/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:29:52 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/28 15:29:54 by degabrie         ###   ########.fr       */
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

	size = 15;
	printf ("ft_strlcat return: %zu\n", ft_strlcat(string_dst, string_src, size));
	printf ("strlcat return: %zu\n", strlcat(string_dst2, string_src2, size));
	printf ("ft_strlcat: %s\n", string_dst);
	printf ("strlcat: %s\n", string_dst2);	
	return (0);
}
