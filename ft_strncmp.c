/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:53:15 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/31 11:17:17 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char	*s1, const char	*s2, unsigned long int	n)
{
	unsigned long int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1 && s2)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
