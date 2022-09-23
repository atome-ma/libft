/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:45:36 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/23 20:09:18 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

// int main()
// {
// 	printf("Function strlen value = 'adios' \n");
// 	printf("Solution: %zu\n", ft_strlen("adios"));
// }