/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:34:59 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/06 18:44:38 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	mem;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		substr = (char *) ft_calloc(1, sizeof(char));
	else
	{
		if ((slen - start) > len)
			mem = len;
		else
			mem = slen - start;
		substr = (char *) ft_calloc(mem + 1, sizeof(char));
		if (!substr)
			return (0);
		if (len + 1 == 0)
			len--;
		ft_strlcpy(substr, &s[start], len + 1);
	}	
	return (substr);
}

/* int	main(void)
{
	char const		*s = "i just want this part #############";
	unsigned int	start;
	size_t	len;

	start = 5;
	len = 10;
	printf("%s\n", s);
	printf("%s", ft_substr(s, start, len));
	return (0);
} */
