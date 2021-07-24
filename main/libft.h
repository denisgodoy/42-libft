#ifndef LIBFT_H
# define LIBFT_H

int					ft_atoi(const char	*nptr);
int					ft_isalnum(int	c);
int					ft_isalpha(int	c);
int					ft_isascii(int	c);
int					ft_isdigit(int	c);
int					ft_isprint(int	c);
char				*ft_strchr(const char	*s, int	c);
unsigned long int	ft_strlen(const char	*s);
int					ft_strncmp(const char	*s1, const char	*s2,
						unsigned int	n);
int					ft_tolower(int	c);
int					ft_toupper(int	c);

#endif