/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:54:27 by tmoreilh          #+#    #+#             */
/*   Updated: 2021/03/26 11:54:28 by tmoreilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*slt;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	slt = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!slt)
		return (NULL);
	while (s[i])
	{
		slt[i] = f(i, s[i]);
		i++;
	}
	slt[i] = '\0';
	return (slt);
}
