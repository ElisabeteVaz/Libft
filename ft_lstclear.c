/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:09:22 by evaz              #+#    #+#             */
/*   Updated: 2021/11/12 11:09:22 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last_elem;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		last_elem = *lst;
		*lst = last_elem->next;
		free(last_elem);
	}
	*lst = NULL;
}
