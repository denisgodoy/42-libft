/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:56:43 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:56:44 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 132;
	while (i > 123)
	{
		printf("Test: %c\nExpected: %d\nGot: %d\n\n",
			i, isprint(i), ft_isprint(i));
		i--;
	}
	printf("Test: %c\nExpected: %d\nGot: %d\n\n",
		32, isprint(i), ft_isprint(i));
}
