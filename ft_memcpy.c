/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:06:45 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/30 10:59:02 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dst, const void	*src, unsigned long int	n)
{
	char		*str_dst;
	const char	*str_src;

	str_src = (char *)src;
	str_dst = (char *)dst;
	while (n--)
		*(str_dst++) = *(str_src++);
	return (dst);
}
