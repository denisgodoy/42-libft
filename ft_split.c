/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:42:51 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/04 22:24:17 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>

char	**ft_split(char const	*s, char	c)
{
	char	*ptr;
	char	*str;
	
	printf ("%c\n", c);
	printf ("%s\n", s);
	printf ("%p\n\n", s);
	ptr = ft_strchr(ft_strdup(s), 'm');
	printf ("%s\n", ptr);
	printf ("%p\n\n", ptr);
	str = ft_strdup(ft_strchr(ptr + 1, c));
	printf ("%s\n", str);
	printf ("%p\n\n", str);
	printf ("%s\n", ptr);
	printf ("%p\n", ptr);
	return (0);
}

int	main(void)
{
	char	*str;

	str = "olá mundo louco louco";
	ft_split(str, 'l');
	return (0);
}
