/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:40:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/28 19:23:43 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "bonus.h"

t_list	*ft_addlink(t_list *list, void *content)
{
	t_list	*manipuleList;

	manipuleList = malloc(sizeof(t_list));
	if (manipuleList)
	{
		manipuleList->content = content;
		manipuleList->next = list;
	}
	return (manipuleList);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*manipuleList;

	manipuleList = malloc(sizeof(t_list));
	if (manipuleList)
	{
		manipuleList->content = content;
		manipuleList->next = NULL;
	}
	return (manipuleList);
}

/*t_list	*ft_lstctn(t_list *list, void *content)
{
	t_list *x;

	x = malloc(sizeof(t_list));
	if (x)
	{
		x->content = content;
		x->next = NULL;
	}
	return (x);
}*/

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr_fd(list->content, 2);
		list = list->next;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	return;
}

int		ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else 
		{
			last = ft_lstlast(*(alst));
			last->next = new;
		}
	}
}

/*int	main()
{
	void	*content;
	char	*s;
	char	*st;
	char	*str;
	char	*stri;
	char	*strin;
	t_list	*list;
	t_list	*alst;
	t_list	*lst;

	list = NULL;
	s = "Chapeau\n";
	st = "Chameau\n";
	str = "Challumeau\n";
	stri = "Chapati\n";
	strin = "Chamarre\n";
	content = s;
	list = ft_addlink(list, content);
	lst = list;
	content = st;
	list = ft_addlink(list, content);
	content = str;
	list = ft_addlink(list, content);
	alst = list;
	print_list(list);
	printf("\n");
	print_list(ft_lstlast(lst));
	printf("\n");
	content = stri;
	printf("taille de notre chaine %d", ft_lstsize(list));
	printf("\n\nmaillon 1, 2, 3 retourne\n\n");
	list = ft_addlink(list, content);
	ft_lstadd_front(&alst, list);
	print_list(list);
	printf("\n\n");
	content = strin;
	list = ft_addlink(list, content);
	ft_lstadd_back(&alst, list);
	print_list(list);
}*/
