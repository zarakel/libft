/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:29:08 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/07 12:54:06 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)src;
	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (s[i] && i < (dstsize - 1))
	{
		dst[i] = s[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (j);
}
