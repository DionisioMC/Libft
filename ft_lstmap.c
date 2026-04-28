/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:04:36 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/28 14:40:47 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	t_list	*last_node;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	last_node = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		if (!list)
			list = node;
		else
			last_node->next = node;
		last_node = node;
		lst = lst->next;
	}
	return (list);
}
