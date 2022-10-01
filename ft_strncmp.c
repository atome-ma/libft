/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:32:11 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/01 15:13:50 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && n - 1 > idx && (s1[idx] == s2[idx]))
		idx++;
	if (n == 0)
		return (0);
	return (((unsigned char *)s1)[idx] - ((unsigned char *)s2)[idx]);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "testss";
	char s2[] = "test";

	printf("Programe %d\n", strncmp(s1, s2, 7));
	printf("My fuction %d\n", ft_strncmp(s1, s2, 7));
	return (0);
} */
