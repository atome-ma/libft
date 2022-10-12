/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:48:23 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/12 21:17:19 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(long n);
static char		*ft_converte(int n, int len, char *str);

char	*ft_itoa(int n)
{
	char	*number;
	int		len;

	if (!n)
		return (ft_strdup("0"));
	len = ft_count(n);
	number = (char *) ft_calloc(len + 1, sizeof(char));
	if (!number)
		return (0);
	number = ft_converte(n, len, number);
	return (number);
}

static int	ft_count(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_converte(int n, int len, char *str)
{
	long	nb;

	nb = n;
	len--;
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + 48;
		nb /= 10;
		len--;
	}
	return (str);
}

/* int	main(void)
{
	printf("%s\n", ft_itoa('\0'));
	return (0);
} */
