/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:09:06 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/06 13:54:51 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

struct s_init
{
	int		i;
	int		j;
	int		k;
	int		l;
};

void	*ft_malloc(char const *s, char c)
{
	char	*a;
	int		i;

	i = 0;
	while (s[i] != c)
		i++;
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (!a)
		return (NULL);
	return (a);
}

void	*ft_malloc1(char const *s, char c)
{
	char	*b;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c)
		i++;
	j = ft_strlen(s);
	b = (char *)malloc(sizeof(char) * (j - (i + 1)));
	if (!b)
		return (NULL);
	return (b);
}

char	*rouli1(char *a, const char *s, int i, int l)
{
	while (i < l + 1)
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char			**d;
	struct s_init	x;

	d = (char **)malloc(sizeof(char *) * 2);
	if (!d)
		return (NULL);
	d[0] = ft_malloc(s, c);
	d[1] = ft_malloc1(s, c);
	x.i = 0;
	x.j = 0;
	x.l = 0;
	x.k = ft_strlen(s);
	while (s[x.l] != c)
		x.l++;
	d[0] = rouli1(d[0], s, x.i, x.l);
	while (x.l < x.k + 1)
	{
		d[1][x.j] = s[x.l + 1];
		x.j++;
		x.l++;
	}
	return (d);
}
