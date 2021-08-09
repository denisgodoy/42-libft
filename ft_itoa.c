/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:28:40 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/09 12:35:47 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int	n)
{
	int		i;
	char	str[10];
	char	numtos;
	char	*ptr;

	i = 0;
	while (n > 0)
	{
		numtos = n % 10 + '0';
		n = n / 10;
		str[i] = numtos;
		i++;
	}
	str[i] = '\0';
	ptr = (char)ft_calloc(ft_strlen(str), 4);
	ptr = str;
	return (ptr);
}
