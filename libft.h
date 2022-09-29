/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:45:22 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/29 21:23:30 by atome-ma         ###   ########.fr       */
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
/*The stpcpy() and strcpy() functions copy the string src to dst 
(including the terminating `\0' character.)*/
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

#endif