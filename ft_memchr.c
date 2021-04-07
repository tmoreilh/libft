/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:37:29 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/25 15:37:32 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*plot;

	plot = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (n)
	{
		if (plot[i] == c)
		{
			return (&plot[i]);
		}
		i++;
		n--;
	}
	return (0);
}
