/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:50:42 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/16 14:26:47 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	num_nodes;

	num_nodes = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		num_nodes++;
	}
	return (num_nodes);
}
