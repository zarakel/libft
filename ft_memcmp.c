/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:22:49 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 15:02:58 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;
	unsigned int i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] < str2[i])
				return str2[i] - str1[i];
			if (str2[i] < str1[i])
				return str1[i] - str2[i];
		}		
		str1[i]++;
		str2[i]++;
		i++;
	}
	return (0);
}
