/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:39:56 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/30 15:40:01 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				h;
	unsigned int	i;

	i = 1;
	h = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[h] == s2[h] && s1[h] != 0)
	{
		h++;
		i++;
	}
	return ((unsigned char)s1[h] - (unsigned char)s2[h]);
}
