/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:24:30 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/25 15:24:32 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*srrc;

	i = 0;
	dest = (char *)dst;
	srrc = (char *)src;
	if (!dst && !src)
		return (0);
	if (dest > srrc)
		while (len-- > 0)
			dest[len] = srrc[len];
	else
	{
		while (i < len)
		{
			dest[i] = srrc[i];
			i++;
		}
	}
	return (dst);
}
