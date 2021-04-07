/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 12:19:46 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/04/01 12:19:47 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*vague;

	vague = *lst;
	if (!lst || !del)
		return ;
	while (vague != NULL)
	{
		ft_lstdelone(vague, del);
		vague = vague->next;
	}
	*lst = NULL;
}
