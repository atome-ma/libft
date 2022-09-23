/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:12:08 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/23 21:32:34 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char) ch)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (0);
}
