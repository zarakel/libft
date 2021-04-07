/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:02:31 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/07 13:44:35 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*f(unsigned int i, char a[i])
{
	a[i] += 32;
	return (a);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char (&)a[i]))
{
	char			*a;
	int 			i;

	i = ft_strlen(s);
	a = (char *)malloc(sizeof(char) * i);
	a = (char *)s;
	if (!a)
		return (NULL);
	while (a[i])
	{
		a[i] = f(i, a[i]);
		i++;
	}
	return (a);
}

int	main()
{
	char *s;
	unsigned int i;

	i = 0;
	s = "atchoum";
	printf("%s\n", ft_strmapi(s, char (*f)(i, &s[i])));
}
