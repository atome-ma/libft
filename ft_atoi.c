/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:37 by atome-ma          #+#    #+#             */
/*   Updated: 2022/09/27 19:16:00 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		++str;
	}
	return (value * sign);
}
