/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:57:51 by evaz              #+#    #+#             */
/*   Updated: 2021/11/12 10:57:51 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_elem;

	last_elem = lst;
	if (!lst)
		return (NULL);
	while (last_elem->next != NULL)
		last_elem = last_elem->next;
	return (last_elem);
}
