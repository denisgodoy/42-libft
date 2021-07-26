/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:04:28 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/26 15:04:29 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	int		find;

	string = "abcdefghijklmnopqrstuvwxyz";
	find = 'a';
	while (find <= 'z')
	{
		printf("Start at: %c\nExpected: %s\nGot: %s\n\n",
			find, strchr(string, find), ft_strchr(string, find));
		find++;
	}
}
