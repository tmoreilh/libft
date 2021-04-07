/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:31:31 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/22 13:31:33 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dest;
	char	*srrc;

	dest = (char *)dst;
	srrc = (char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	while (n)
	{
		dest[i] = srrc[i];
		i++;
		n--;
	}
	return (dst);
}
