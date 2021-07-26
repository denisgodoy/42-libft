/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:04:31 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/26 15:04:32 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	char	*string2;
	char	string3[27];
	int		i;

	i = 0;
	while (i <= 25)
	{
		string3[i] = 65 + i;
		i++;
	}
	string3[i] = '\0';
	string = "Hello World";
	string2 = "42 São Paulo";
	printf("Test: %s\nExpected: %lu\nGot: %lu\n\n",
		string, strlen(string), ft_strlen(string));
	printf("Test: %s\nExpected: %lu\nGot: %lu\n\n",
		string2, strlen(string2), ft_strlen(string2));
	printf("Test: %s\nExpected: %lu\nGot: %lu\n\n",
		string3, strlen(string3), ft_strlen(string3));
}
