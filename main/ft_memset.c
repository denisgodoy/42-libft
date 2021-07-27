/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:08:24 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 18:25:33 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	string[11] = "Hello World";
	char	string2[11] = "Hello World";
	char	string3[11] = "Hello World";

	printf ("Expected: %s\nGot: %s\n\n",
		memset(string, '!', 5),
		ft_memset(string, '!', 5));
	printf ("Expected: %s\nGot: %s\n\n",
		memset(string2, '!', 8),
		ft_memset(string2, '!', 8));
	printf ("Expected: %s\nGot: %s\n\n",
		memset(string3, '!', 11),
		ft_memset(string3, '!', 11));
	return (0);
}
