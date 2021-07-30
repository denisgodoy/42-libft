/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:24:23 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 23:48:31 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	arr1[10] = "OlaOlaOla";
	// char	arr2[10] = "Hello";
	// char	arr3[10] = "Ola 42";
	// char	arr4[10] = "Hola";
	
	// printf("Copy 2 bytes from arr2 to arr1\narr1 = 'Ola' | arr2 = 'Hello'\n");
	// printf("ft_memcpy: %s\n", ft_memcpy(arr1, arr2, 2));
	// printf("memcpy: %s\n\n", memcpy(arr1, arr2, 2));
	// printf("Copy 4 bytes from arr4 to arr3\narr4 = 'Hola' | arr3 = 'Ola 42'\n");
	// printf("ft_memcpy: %s\n", ft_memcpy(arr3, arr4, 4));
	// printf("memcpy: %s\n\n", memcpy(arr3, arr4, 4));
	// printf("Copy 4 bytes from arr3 to arr1\narr3 = 'Hola42' | arr1 = 'Hea'\n");
	// printf("ft_memcpy: %s\n", ft_memcpy(arr1, arr3, 3));
	// printf("memcpy: %s\n\n", memcpy(arr1, arr3, 3));

	printf("ft_memcpy: %s\n", ft_memcpy(arr1 + 2, arr1, 3));
	printf("memcpy: %s\n\n", memcpy(arr1 + 2, arr1, 3));

	return (0);
}
