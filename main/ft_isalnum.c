/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:56:29 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:56:30 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 66;
	while (i > 55)
	{
		printf("Test: %c\nExpected: %d\nGot: %d\n\n",
			i, isalnum(i), ft_isalnum(i));
		i--;
	}
}
