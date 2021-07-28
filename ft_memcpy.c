/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:25:46 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 22:25:50 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dst, const void	*src, unsigned long int	n)
{
	char		*str_dst;
	const char	*str_src;

	str_src = &src[0];
	str_dst = &dst[0];
	while (n--)
		*(str_dst++) = *(str_src++);
	return (dst);
}
