/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:57:05 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:57:06 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 122;
	while (i > 94)
	{
		printf("Test: %c\nExpected: %c\nGot: %c\n\n",
			i, toupper(i), ft_toupper(i));
		i--;
	}
}
