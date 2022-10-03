/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:45:22 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/03 19:48:01 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* The isalpha() function tests for any character for which isupper(3)
 or islower(3) is true. The value of the argument must be representable 
 as an unsigned char or the value of EOF. 
 Returns zero if the character tests false and returns non-zero
 if the character tests true.*/
int		ft_isalpha(int c);
/* The isalnum() function tests for any character for which isalpha(3)
or isdigit(3) is true.  The value of the argument must be representable
as an unsigned char or the value of EOF. 
Returns zero if the character tests false and returns non-zero
if the character tests true.*/
int		ft_isalnum(int c);
/* The isascii() function tests for an ASCII character, which is 
any character between 0 and octal 0177 inclusive. */
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
/* The memset() function writes len bytes of value c 
(converted to an unsigned char) to the string b. 
returns its first argument. */
void	*ft_memset(void *dest, int ch, size_t count);
/* The bzero() function writes n zeroed bytes to the string s.
If n is zero, bzero() does nothing. */
void	ft_bzero(void *s, size_t n);
/* The memcpy() function copies n bytes from memory area src to memory
area dst. If dst and src overlap, behavior is undefined.  Applications 
in which dst and src might over-lap should use memmove(3) instead.
return the original value of dst.*/
void	*ft_memcpy(void *dest, const void *src, size_t count);
/*The memmove() function copies len bytes from string src to string dst.  
The two strings may over-lap; the copy is always 
done in a non-destructive manner.*/
void	*ft_memmove(void *dest, const void *src, size_t count);
/*strlcpy() copies up to dstsize - 1 characters from the string 
src to dst, NUL-terminating the result if dstsize is not 0, return
lenght of the src.*/
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
/*strlcat() appends string src to the end of dst.  It will 
append at most dstsize - strlen(dst) - 1 characters.  It will 
then NUL-terminate, unless dstsize is 0 or the original dst string 
was longer than dstsize (in practice this should not happen as 
it means that either dstsize is incorrect or that dst is not a proper string).
If the src and dst strings overlap, the behavior is undefined.*/
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
/*The strncmp() function compares not more than n characters.  Because
strncmp() is designed for comparing strings rather than binary data,
characters that appear after a `\0' character are not compared.
return an integer greater than, equal to, or less than 0, according 
as the string s1 is greater than,equal to, or less than the string s2.
The comparison is done using unsigned characters, so that `\200' is 
greater than `\0'.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s.
returns a pointer to the byte located, or NULL if no such
byte exists within n bytes. */
void	*ft_memchr(const void *s, int c, size_t n);
/* The memcmp() function compares byte string s1 against byte 
string s2. Both strings are assumed to be n bytes long. returns 
zero if the two strings are identical, otherwise returns the difference 
between the first two differing bytes (treated as unsigned char values,
 so that `\200' is greater than `\0', for example).  Zero-length
strings are always identical.  This behavior is not required by C 
and portable code should only depend on the sign of the returned value. */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *str, const char *substr, size_t len);

#endif