/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:54:06 by evaz              #+#    #+#             */
/*   Updated: 2021/11/12 10:54:06 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*list;

	size = 0;
	list = lst;
	while (list != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}
