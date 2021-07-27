/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:56:34 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:56:35 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 98;
	while (i > 88)
	{
		printf("Test: %c\nExpected: %d\nGot: %d\n\n",
			i, isalpha(i), ft_isalpha(i));
		i--;
	}
}
