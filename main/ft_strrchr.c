/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:21:09 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/26 22:21:10 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	int		find;

	string = "42 is an innovative engineering and programming college";
	find = 'a';
	while (find <= 'z')
	{
		printf("Start at: %c\nExpected: %s\nGot: %s\n\n",
			find, strrchr(string, find), ft_strrchr(string, find));
		find++;
	}
}
