/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:55:54 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:55:54 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* writes n zeroed bytes to the string s. 
 * will be making a string of size n and filling each index position with a 0*/

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*zero;

	zero = str;
	while (len != 0)
	{
		*zero++ = 0;
		len--;
	}
}
