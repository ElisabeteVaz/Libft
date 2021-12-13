/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:50:43 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:50:43 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Put all the string in lower cases

int	ft_tolowwer(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (c + 32);
	return (0);
}