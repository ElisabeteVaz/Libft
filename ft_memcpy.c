/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:53:57 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:53:57 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies n bytes from memory area src to memory area dst*/

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	l;
	char	*destmemory;
	char	*srcmemory;

	l = 0;
	destmemory = (char *)dest;
	srcmemory = (char *)src;
	while (l < len)
	{
		destmemory[l] = srcmemory[l];
		l++;
	}
	return (dest);
}
