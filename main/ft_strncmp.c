/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:56:52 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 14:56:53 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	char	*string2;
	char	*string3;
	char	*string4;
	int		bytes;

	bytes = 4;
	string = "Hello World";
	string2 = "Hello World";
	string3 = "Ola World";
	string4 = "OlaÿWorld";
	printf("String: %s\nCompare to: %s\nExpected: %d\nGot: %d\n\n",
		string, string2, strncmp(string, string2, bytes),
		ft_strncmp(string, string2, bytes));
	printf("String: %s\nCompare to: %s\nExpected: %d\nGot: %d\n\n",
		string2, string3, strncmp(string2, string3, bytes),
		ft_strncmp(string2, string3, bytes));
	printf("String: %s\nCompare to: %s\nExpected: %d\nGot: %d\n",
		string3, string4, strncmp(string3, string4, bytes),
		ft_strncmp(string3, string4, bytes));
}
