/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:42:01 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 20:54:01 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<strings.h>

int	main(void)
{
	char	string[15] = "42424242424242";
	char	string2[15] = "42424242424242";
	char	string3[15] = "Hello World 42";
	char	string4[15] = "Hello World 42";

	printf ("Original string: %s\n", string);
	bzero(string, 1);
	printf ("bzero: %s\n\n", string);
	printf ("Original string: %s\n", string2);
	ft_bzero(string2, 1);
	printf ("ft_bzero: %s\n\n", string2);
	printf ("Test with 0: %s\n", string3);
	bzero(string3, (0));
	printf ("bzero: %s\n\n", string3);
	printf ("Test with 0: %s\n", string4);
	ft_bzero(string4, 0);
	printf ("ft_bzero: %s\n\n", string4);
	return (0);
}
