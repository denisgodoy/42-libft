/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:03:26 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/26 15:03:27 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*nptr)
{
	int	i;
	int	c_minus;
	int	num;

	num = 0;
	c_minus = 0;
	i = 0;
	while (nptr[i] == ' '
		|| (nptr[i] >= '\t' && nptr[i] <= '\r')
		|| nptr[i] == '+'
		|| nptr[i] == '-')
	{
		if (nptr[i] == '-')
			c_minus += 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	if (c_minus % 2 != 0)
		return (num *= -1);
	return (num);
}
