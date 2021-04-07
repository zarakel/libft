/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 08:34:23 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/01 12:44:30 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	stl(char *sg)
{
	int	i;

	i = 0;
	while (sg[i])
		i++;
	return (i);
}

void	*ft_malloc(char const *s1, char const *set)
{
	char	*a;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = stl((char *)s1);
	j = stl((char *)set);
	a = (char *)malloc(sizeof(char) * (i - j));
	if (!a)
		return (NULL);
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	b;
	size_t	c;
	size_t	i;

	a = ft_malloc(s1, set);
	b = 0;
	c = 0;
	i = 0;
	while (s1[b])
	{
		if (set[c] == s1[b])
			c++;
		else if (set[c] != s1[b])
		{
			a[i] = s1[b];
			i++;
		}
		b++;
	}
	return (a);
}
