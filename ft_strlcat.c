/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:16:24 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/07 14:16:25 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	j = 0;
	k = 0;
	while (src[j])
		j++;
	while (dst[k])
		k++;
	l = k;
	i = 0;
	while (src[i] && i < (dstsize - dst[k] - 1))
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	if (dstsize != 0 || dstsize < l)
		dst[k] = '\0';
	printf("%s\n", dst);
	return (j + l);
}	
