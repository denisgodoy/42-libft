/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:56:40 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:56:41 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<ctype.h>

int	main(void)
{
	int	i;

	i = 57;
	while (i > 42)
	{
		printf("Test: %c\nExpected: %d\nGot: %d\n\n",
			i, isdigit(i), ft_isdigit(i));
		i--;
	}
}
