/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:14:44 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/30 23:25:09 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void	*s, int	c, unsigned long int	n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (str && n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (0);
}
