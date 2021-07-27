/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:57:09 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/27 20:45:29 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int					ft_atoi(const char	*nptr);

void				ft_bzero(
						void	*s,
						unsigned long int	n);

int					ft_isalnum(int	c);

int					ft_isalpha(int	c);

int					ft_isascii(int	c);

int					ft_isdigit(int	c);

int					ft_isprint(int	c);

void				*ft_memset(
						void	*b,
						int	c,
						unsigned long int	len);

char				*ft_strchr(
						const char	*s,
						int	c);

unsigned long int	ft_strlcat(
						char	*dst,
						const char	*src,
						unsigned long int	size);

unsigned long int	ft_strlen(const char	*s);

int					ft_strncmp(
						const char	*s1,
						const char	*s2,
						unsigned long int	n);

char				*ft_strrchr(
						const char	*s,
						int	c);

int					ft_tolower(int	c);

int					ft_toupper(int	c);

#endif