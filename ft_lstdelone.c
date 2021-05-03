/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:29:36 by jbuan             #+#    #+#             */
/*   Updated: 2021/05/02 14:46:36 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	del (lst->content);
	free (lst);
	return ;
}
