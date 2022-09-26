/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:44:44 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/26 22:21:17 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;

	i = ft_strlen(str);
	if ((char)ch == '\0')
		return ((char *) &str[i]);
	else
	{
		while ((char) ch != str[i])
			i--;
		return ((char *) &str[i]);
	}
	return (NULL);
}
