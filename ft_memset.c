/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:14:24 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 18:14:31 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void	*b, int	c, unsigned long int	len)
{
	char	*str;

	str = &b[0];
	while (len--)
		*(str++) = (unsigned char)c;
	return (b);
}
