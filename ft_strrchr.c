/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:44:44 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/27 18:08:24 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0 && str[i] != (char)ch)
	{
		i--;
	}
	if (str[i] == (char)ch)
		return ((char *)&str[i]);
	return (NULL);
}
