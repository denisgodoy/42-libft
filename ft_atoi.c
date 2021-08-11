/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:52:42 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/11 15:43:27 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_overflow(int	num, int	c_minus)
{
	unsigned int	nb;

	nb = num;
	if (nb > 2147483648 && c_minus)
		return (0);
	if (nb > 2147483647 && !c_minus)
		return (-1);
	return (1);
}

int	ft_atoi(const char	*str)
{
	int	c_minus;
	int	num;
	int	ret;

	num = 0;
	c_minus = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			c_minus = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	ret = check_overflow(num, c_minus);
	if (ret != 1)
		return (ret);
	if (c_minus)
		return (num *= -1);
	return (num);
}
