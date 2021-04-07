/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 16:01:14 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/25 16:01:15 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dest;
	unsigned char	*srrc;

	c = (unsigned char)c;
	dest = (unsigned char *)dst;
	srrc = (unsigned char *)src;
	i = 0;
	while (n)
	{
		dest[i] = srrc[i];
		if (c == srrc[i])
		{
			return (dst + (i + 1));
		}
		i++;
		n--;
	}
	return (0);
}
