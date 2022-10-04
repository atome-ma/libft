/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:33:34 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/04 18:54:50 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (substr[0] == 0)
		return ((char *)str);
	while (str[i])
	{
	j = 0;
		while (str[i + j] == substr[j] && len > (i + j))
		{
			if (str[i + j] == 0 && substr[j] == 0)
				return ((char *)&str[i]);
			j++;
		}
		if (substr[j] == 0)
			return ((char *)str + i);
		i++;
	}	
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str[] = "lorem ipsum dolor sit amet";
	const char	substr[] = "ipsumm";
	size_t		len;

	len = 30;
	printf("Fuction    : %s\n", strnstr(str, substr, len));
	printf("Str        : %s\n", str);
	printf("My fuction : %s\n", ft_strnstr(str, substr, len));
	return (0);
}
 */