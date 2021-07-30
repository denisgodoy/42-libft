/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:56:58 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/29 20:41:03 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

int	main(void)
{
	char	*string;
	char	string2[] = "";
	int		find;
	int		find_str;

	string = "42 is an innovative engineering and programming college";
	find = 'a';
	find_str = '\0';
	while (find <= 'z')
	{
		printf("Start at: %c\nExpected: %s\nGot: %s\n\n",
			find, strrchr(string, find), ft_strrchr(string, find));
		find++;
	}
	printf("Start at: %c\nExpected: %s\nGot: %s\n\n",
		find_str, strrchr(string, find_str), ft_strrchr(string, find_str));
	printf("Null string\nStart at: %c\nExpected: %s\nGot: %s\n\n",
		find_str, strrchr(string2, find_str), ft_strrchr(string2, find_str));
}
