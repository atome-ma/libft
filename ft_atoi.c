/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:37 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/23 20:54:34 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		++str;
	}
	return (value * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main()
{
	const char	*str = "\v\f+-641cacas";

	printf("F%d\n", atoi(str));
	printf("P%d", ft_atoi(str));
	return (0);
}*/
