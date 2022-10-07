/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:28:15 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/07 20:50:29 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start;
	size_t			end;
	char			*str;

	if (!s1[0] || !set)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]) && s1[start])
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

/* int	main(void)
{
	printf("%s\n", ft_strtrim("    Hola que", " "));
	return (0);
} */
