/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:55:16 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/06 19:16:39 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct s_init
{
	char			*a;
	int				i;
	unsigned int	nb;
};

int	l(int n)
{
	unsigned int	nb;
	int				i;

	nb = n;
	i = 0;
	if (nb < 0)
		i++;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	*ft_malloc(int i)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * i);
	if (!a)
		return (NULL);
	return (a);
}

char	*ft_itoa(int n)
{
	struct s_init	x;

	x.i = l(n);
	x.nb = n;
	x.a = malloc(x.i);
	x.a[x.i--] = '\0';
	if (x.nb < 0)
	{
		x.a[x.i] = '-';
		x.i++;
	}
	else if (x.nb == 0)
	{
		x.a[0] = '0';
		return (x.a);
	}
	while (x.nb > 0)
	{
		x.a[x.i] = '0' + (x.nb % 10);
		x.nb = x.nb / 10;
		x.i--;
	}
	return (x.a);
}
