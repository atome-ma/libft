/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:32:48 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/30 21:56:54 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	slen;
	size_t	dlen;

	dlen = ft_strlen(dest);
	slen = 0;
	if (destsize > dlen)
	{
		while (slen < (destsize - dlen - 1) && src[slen])
		{
			dest[dlen + slen] = src[slen];
			slen++;
		}
		if (slen <= (destsize - dlen))
			dest[dlen + slen] = 0;
		return (dlen + ft_strlen(src));
	}
	return (destsize + ft_strlen(src));
}
