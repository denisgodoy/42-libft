/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:38:13 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/29 00:00:01 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void	*dst, const void	*src, unsigned long int	len)
{
	char		*str_dst;
	const char	*str_src;

	str_src = &src[0];
	str_dst = &dst[0];
	while (len--)
		*(str_dst++) = *(str_src++);
	return (dst);
}
