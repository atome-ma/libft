/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:27:29 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/04 20:05:21 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	size_t	i;
	char	*str;

	i = 0;
	slen = ft_strlen(s1) + 1;
	str = (char *) ft_calloc (slen, sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, slen);
	return (str);
}

/* while (i < slen)
	{
		str[i] = s1[i];
		i++;
	}*/