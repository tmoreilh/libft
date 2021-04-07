/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:39:44 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/23 14:39:51 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	p;
	char	*d;

	i = 0;
	p = (char)c;
	d = (char *)s;
	while (s[i] != 0)
	{
		i++;
	}
	if (d[i] == p && d[i] == 0)
	{
		return (&d[i]);
	}
	while (i >= 0 && d[i] != p)
	{
		i--;
	}
	if (d[i] == p)
	{
		return (&d[i]);
	}
	return (0);
}
