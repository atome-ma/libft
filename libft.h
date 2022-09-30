/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:45:22 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/29 22:41:42 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
void	*ft_memset(void *dest, int ch, size_t count);
void	ft_bzero(void *s, size_t n);
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

#endif