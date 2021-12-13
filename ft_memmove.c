/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:53:50 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:53:50 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = len;
	j = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
		while (i-- > 0)
			((char *)dst)[i] = ((const char *)src)[i];
	else
		while (++j < len)
			((char *)dst)[j] = ((const char *)src)[j];
	return (dst);
}
