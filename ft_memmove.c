/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:46:44 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/29 19:47:52 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t	len;

	len = 0;
	if (!dest && !src)
		return (0);
	if (&dest[0] < &src[0])
		ft_memcpy(dest, src, count);
	else if (&dest[0] > &src[0])
	{
		while (count > 0)
		{
			((char *)dest)[count - 1] = ((char *)src)[count - 1];
			count--;
		}
	}
	return (&dest[0]);
}
