/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:27:38 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/27 19:11:00 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		str[i] = (unsigned char)ch;
		i++;
	}
	return (&dest[0]);
}
