/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:32:28 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/15 12:51:44 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	idx;
	size_t	len;
	char	*str;

	idx = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (0);
	while (idx < len)
	{
		str[idx] = f(idx, s[idx]);
		idx++;
	}
	return (str);
}
