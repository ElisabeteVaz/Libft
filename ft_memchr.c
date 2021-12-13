/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:54:09 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:54:09 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;
	while (i < len)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
