/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:57:01 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:57:02 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 92;
	while (i > 64)
	{
		printf("Test: %c\nExpected: %c\nGot: %c\n\n",
			i, tolower(i), ft_tolower(i));
		i--;
	}
}
