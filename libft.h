/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:53:44 by degabrie          #+#    #+#             */
/*   Updated: 2021/07/31 17:51:12 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int					ft_atoi(const char	*nptr);

void				ft_bzero(
						void	*s,
						unsigned long int	n);

void				*ft_calloc(
						unsigned long int	count,
						unsigned long int	size);

int					ft_isalnum(int	c);

int					ft_isalpha(int	c);

int					ft_isascii(int	c);

int					ft_isdigit(int	c);

int					ft_isprint(int	c);

void				*ft_memchr(
						const void	*s,
						int	c,
						unsigned long int	n);

int					ft_memcmp(
						const void	*s1,
						const void	*s2,
						unsigned long int	n);

void				*ft_memcpy(
						void	*dst,
						const void	*src,
						unsigned long int	n);

void				*ft_memmove(
						void	*dst,
						const void	*src,
						unsigned long int	len);

void				*ft_memset(
						void	*b,
						int	c,
						unsigned long int	len);

char				*ft_strchr(
						const char	*s,
						int	c);

char				*ft_strdup(const char	*s1);

unsigned long int	ft_strlcat(
						char	*dst,
						const char	*src,
						unsigned long int	dstsize);

unsigned long int	ft_strlcpy(
						char	*dst,
						const char	*src,
						unsigned long int	dstsize);

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