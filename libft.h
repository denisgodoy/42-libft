/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: degabrie <degabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:53:44 by degabrie          #+#    #+#             */
/*   Updated: 2021/08/19 00:09:59 by degabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
* @brief Convert ASCII string to integer.
*
* @param nptr String to be converted.
*
* @return String pointed to by nptr to int representation.
*/
int		ft_atoi(const char	*nptr);

/**
* @brief Write zeroes to a byte string.
*
* @param s String to be zeroe'd.
* @param n Number of bytes to iterate.
*
* @return 
*/
void	ft_bzero(void	*s, size_t	n);

/**
* @brief Contiguously allocates memory with bytes of value zero.
*
* @param count Number of objects.
* @param size Size in bytes.
*
* @return Pointer to the allocated memory.
*/
void	*ft_calloc(size_t	count, size_t	size);

/**
* @brief Tests for any character for which ft_isalpha() or ft_isdigit() is true.
*
* @param c Character to be tested.
*
* @return 0 if the character tests false and 1 if the character tests true.
*/
int		ft_isalnum(int	c);

/**
* @brief Tests for any alphabetical character.
*
* @param c Character to be tested.
*
* @return 0 if the character tests false and 1 if the character tests true.
*/
int		ft_isalpha(int	c);

/**
* @brief Tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
*
* @param c Character to be tested.
*
* @return 0 if the character tests false and 1 if the character tests true.
*/
int		ft_isascii(int	c);

/**
* @brief Tests for a decimal digit character.
*
* @param c Character to be tested.
*
* @return 0 if the character tests false and 1 if the character tests true.
*/
int		ft_isdigit(int	c);

/**
* @brief Tests for any printing character, including space.
*
* @param c Character to be tested.
*
* @return 0 if the character tests false and 1 if the character tests true.
*/
int		ft_isprint(int	c);

/**
* @brief Converts integer to string and allocates memory.
*
* @param n The integer to convert.
*
* @return Pointer to the string representing the integer. 0 if the allocation fails.
*/
char	*ft_itoa(int	n);

void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstadd_front(t_list	**lst, t_list	*new);
void	ft_lstclear(t_list	**lst, void	(*del)(void *));
void	ft_lstdelone(t_list	*lst, void	(*del)(void *));
void	ft_lstiter(t_list	*lst, void	(*f)(void *));
t_list	*ft_lstlast(t_list	*lst);
t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *));
t_list	*ft_lstnew(void	*content);
int		ft_lstsize(t_list	*lst);

/**
* @brief Locates the first occurrence of c (converted to an unsigned char) in string s.
*
* @param s String to locate c.
* @param c Character to be located.
* @param n Max size to iterate string.
*
* @return Pointer to the byte located, or 0 if no such byte exists within n bytes.
*/
void	*ft_memchr(const void	*s, int	c, size_t	n);

/**
* @brief Compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
*
* @param s1 String to be compared.
* @param s2 String to be compared.
* @param n Number of bytes to compare.
*
* @return 0 if the two strings are identical, otherwise returns the difference between the first two differing bytes.
*/
int		ft_memcmp(const void	*s1, const void	*s2, size_t	n);

/**
* @brief Copies n bytes from memory area src to memory area dst.
*
* @param dst Destrination string, that will receive the copied content.
* @param src Source string to copy from.
* @param n Number of bytes to be copied.
*
* @return Pointer to the original value of dst.
*/
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);

/**
* @brief Copies len bytes from string src to string dst. The two strings may overlap.
*
* @param dst Destrination string, that will receive the copied content.
* @param src Source string to copy from.
* @param len Number of bytes to be copied.
*
* @return Pointer to the original value of dst.
*/
void	*ft_memmove(void	*dst, const void	*src, size_t	len);

/**
* @brief Writes len bytes of value c (converted to an unsigned char) to the string b.
*
* @param b String which content will be set.
* @param c Character to set.
* @param len Number of bytes that will be set.
*
* @return Pointer to the original string b.
*/
void	*ft_memset(void	*b, int	c, size_t	len);

/**
* @brief Inserts character c to the given file descriptor using write().
*
* @param c Character to insert.
* @param fd File descriptor.
*
* @return
*/
void	ft_putchar_fd(char	c, int	fd);

/**
* @brief Inserts string s to the given file descriptor using write() and append a newline to the end.
*
* @param s String to insert.
* @param fd File descriptor.
*
* @return
*/
void	ft_putendl_fd(char	*s, int	fd);

/**
* @brief Inserts integer to the given file descriptor using write().
*
* @param s Integer to insert.
* @param fd File descriptor.
*
* @return
*/
void	ft_putnbr_fd(int	n, int	fd);

/**
* @brief Inserts string s to the given file descriptor using write().
*
* @param s String to insert.
* @param fd File descriptor.
*
* @return
*/
void	ft_putstr_fd(char	*s, int	fd);

/**
* @brief Splits a string into different strings using c as a delimiter.
*
* @param s String to be split.
* @param c Delimiter character.
*
* @return The array of new strings resulting from the split. 0 if the allocation fails.
*/
char	**ft_split(char const	*s, char	c);

/**
* @brief Locates the first occurrence of c (converted to a char) in the string pointed to by s. '\0' is considered part of the string.
*
* @param s String to locate c.
* @param c Character to be located.
*
* @return Pointer to the located character, or 0 if the character does not appear in the string.
*/
char	*ft_strchr(const char	*s, int	c);

/**
* @brief Allocates sufficient memory for a copy of the string s1, does the copy.
*
* @param s String to be copied.
*
* @return Pointer to the new string. 0 if the allocation fails.
*/
char	*ft_strdup(const char	*s1);

/**
* @brief Applies the function f to each character of the string s, and passing its index as first argument.
*
* @param s String on which to iterate.
* @param f Function to apply to each character.
*
* @return
*/
void	ft_striteri(char	*s, void	(*f)(unsigned int, char*));

/**
* @brief  Concatenated strings s1 and s2 to the allocated memory.
*
* @param s1 String to iterate.
* @param s2 Function to apply to the character.
*
* @return Pointer to the new string. 0 if the allocation fails.
*/
char	*ft_strjoin(char const	*s1, char const	*s2);

/**
* @brief Concatenate strings with the same input parameters.
*
* @param dst Destination string.
* @param src Source string.
* @param dstsize Full size of the destination buffer.
*
* @return The total length of the string they tried to create. If the return value is >= dstsize, the output string has been truncated.
*/
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize);

/**
* @brief Copy strings with the same input parameters.
*
* @param dst Destination string.
* @param src Source string.
* @param dstsize Full size of the destination buffer.
*
* @return The total length of the string they tried to create. If the return value is >= dstsize, the output string has been truncated.
*/
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize);

/**
* @brief Computes the length of the string s.
*
* @param s String to computed the length.
*
* @return The number of characters that precede the terminating null character.
*/
size_t	ft_strlen(const char	*s);

/**
* @brief Applies the function f to each character of the string s to create a new string with allocated memory.
*
* @param s String on which to iterate.
* @param f Function to apply to each character.
*
* @return Pointer to the string created from the successive applications of f. 0 if the allocation fails.
*/
char	*ft_strmapi(const char	*s, char	(*f)(unsigned int, char));

/**
* @brief Compares not more than n characters of string s1 and s2.
*
* @param s1 String to be compared.
* @param s2 String to be compared.
* @param n Number of bytes to compare.
*
* @return An integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.
*/
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);

/**
* @brief Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.
*
* @param haystack String to locate needle.
* @param needle String to be located.
* @param len Max number of bytes to search.
*
* @return If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, 0 is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);

/**
* @brief Locates the last occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string.
*
* @param s String to locate c.
* @param c Character to be located.
*
* @return If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, 0 is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.
*/
char	*ft_strrchr(const char	*s, int	c);

/**
* @brief Removes from the beginning and the end of the string s1 the characters specified in set. 

*
* @param s1 String to be trimmed.
* @param set Reference set of characters to trim.
*
* @return Pointer to the trimmed string allocated memory. 0 if the allocation fails.
*/
char	*ft_strtrim(char const	*s1, char const	*set);

/**
* @brief Removes from the beginning and the end of the string s1 the characters specified in set.
*
* @param s String from which to create the substring.
* @param start Start index of the substring in the string s.
* @param len Maximum length of the substring.
*
* @return Pointer to the a substring from the string ’s’, with allocated memory. 0 if the allocation fails.
*/
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);

/**
* @brief Converts an upper-case letter to the corresponding lower-case letter.
*
* @param c Character to be converted.
*
* @return If the argument is an upper-case letter, the ft_tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.
*/
int		ft_tolower(int	c);

/**
* @brief Converts a lower-case letter to the corresponding upper-case letter.
*
* @param c Character to be converted.
*
* @return If the argument is a lower-case letter, the ft_toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.
*/
int		ft_toupper(int	c);

#endif