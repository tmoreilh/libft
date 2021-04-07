/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:06:12 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/26 11:24:29 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	p;
	char	*d;

	i = 0;
	p = (char)c;
	d = (char *)s;
	while (s[i] != '\0')
	{
		if (p == d[i])
		{
			return (&d[i]);
		}
		i++;
		if (d[i] == 0)
		{
			if (d[i] == p)
			{
				return (&d[i]);
			}
		}
	}
	return (0);
}
