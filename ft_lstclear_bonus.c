/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:46:58 by atome-ma          #+#    #+#             */
/*   Updated: 2022/10/17 19:33:53 by atome-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete;

	if (lst != NULL)
	{
		while (*lst)
		{
			delete = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = delete;
		}
		lst = NULL;
	}
}
