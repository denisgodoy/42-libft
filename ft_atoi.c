/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:52:42 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/30 16:27:33 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char	*str)
{
	int	c_minus;
	int	num;

	num = 0;
	c_minus = 0;
	while ((*str >= '\t' && *str <= '\r')
		|| *str == '+' || *str == '-' || *str == ' ')
	{
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				c_minus = 1;
			str++;
			break ;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (c_minus)
		return (num *= -1);
	return (num);
}
