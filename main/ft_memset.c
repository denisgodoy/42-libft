/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:08:24 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 19:36:43 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

int	main(void)
{
	char	string[12] = "Hello World";

	printf ("Before change: %s\n\n", string);
	printf ("Sets 4 bytes to '?'\n");
	printf ("memset: %s\n\n", memset(string, '?', 4));
	printf ("Sets 3 bytes to '!' after memset\n");
	printf ("ft_memset: %s\n\n", ft_memset(string, '!', 3));
	printf ("After change: %s\n", string);
	return (0);
}
