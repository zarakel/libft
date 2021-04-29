/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:55:16 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/28 19:58:09 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	nbl(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char			*dst;
	unsigned int	len;
	unsigned int	nb;

	len = nbl(n);
	nb = n;
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return NULL;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = 0;
	while (nb)
	{
		dst[len] = nb % 10 + '0'
		len--;
		nb = nb / 10;
	}
	dst[len--] = '\0';
	return (dst);
}
