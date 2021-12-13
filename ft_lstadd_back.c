/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsadd_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:00:44 by evaz              #+#    #+#             */
/*   Updated: 2021/11/12 11:00:44 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	position = *lst;
	if (lst && new)
	{
		if (!position)
			*lst = new;
		else
		{
			while (position->next != NULL)
				position = position->next;
			position->next = new;
		}
	}
	return ;
}
