/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 22:58:14 by julin             #+#    #+#             */
/*   Updated: 2017/11/30 22:58:54 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*item;

	new_lst = NULL;
	if (lst != NULL && (f) != NULL)
	{
		item = (f)(lst);
		new_lst = item;
		lst = lst->next;
		while (lst != NULL)
		{
			item->next = (*f)(lst);
			item = item->next;
			lst = lst->next;
		}
	}
	return (new_lst);
}
