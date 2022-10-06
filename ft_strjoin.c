/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:51:42 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/06 20:00:34 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	s1len;
	unsigned int	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!s1 && !s2)
		return (0);
	str = (char *) ft_calloc(s1len + s2len + 1, sizeof(char));
	if (!str)
		return (0);
	if (s1 && s2)
	{
		ft_strlcpy(str, s1, s1len + 1);
		ft_strlcpy(&str[s1len], s2, s2len +1);
	}
	return (str);
}

/* int	main(void)
{
	char const		*s1 = "\0";
	char const		*s2 = "\0";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */
