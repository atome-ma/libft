/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:54:31 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/15 13:38:59 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	idx;
	size_t	len;

	idx = 0;
	len = ft_strlen(s);
	if (s != NULL && f != NULL)
	{
		while (idx < len)
		{
			f(idx, s);
			idx++;
			s++;
		}
	}
}
