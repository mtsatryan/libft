/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsatrya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 05:43:47 by mtsatrya          #+#    #+#             */
/*   Updated: 2021/02/02 07:05:10 by mtsatrya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*lost;
	t_list	*lom;

	if (!f || !del)
		return (NULL);
	lost = NULL;
	while (lst)
	{
		if (!(lom = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lost, del);
			return (NULL);
		}
		ft_lstadd_back(&lost, lom);
		lst = lst->next;
	}
	return (lost);
}
