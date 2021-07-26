/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:04:13 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/26 15:04:14 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

int	main(void)
{
	char	*string;
	char	*string2;
	char	*string3;
	char	*string4;

	string = " \n \t \r \v2143a648asd";
	string2 = " \n     --+314 a1dfg";
	string3 = "\n  \t   +123as1dfg";
	string4 = "\n  \v\r++++---123-2s1d";
	printf ("Original atoi: %s\nExpected: %d\nReturned: %d\n\n",
		string, atoi(string), ft_atoi(string));
	printf ("Original atoi: %s\nExpected: %d\nReturned: %d\n\n",
		string3, atoi(string3), ft_atoi(string3));
	printf ("Test: %s\nExpected: 314\nReturned: %d\n\n",
		string2, ft_atoi(string2));
	printf ("Test: %s\nExpected: -123\nReturned: %d\n",
		string4, ft_atoi(string4));
}
