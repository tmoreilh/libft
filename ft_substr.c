/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:53:20 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/26 11:53:22 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	i = 0;
	if (!s || start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		if (ft_strlen(&(s[start])) < len)
			len = ft_strlen(&(s[start]));
		sub = malloc(sizeof (char) * len + 1);
		if (!sub)
			return (NULL);
		while ((i < len) && s[start])
		{
			sub[i] = s[start];
			i++;
			start++;
		}
	}	
	sub[i] = 0;
	if (!sub)
		return (NULL);
	return (sub);
}
