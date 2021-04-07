/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:53:39 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/25 17:53:40 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	if (!count || !size)
	{
		size = 1;
		count = 1;
	}
	a = malloc(size * count);
	if (!a)
		return (NULL);
	ft_bzero(a, size * count);
	return (a);
}
