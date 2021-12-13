/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:52:16 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:52:16 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copy from one string to another - src to dstination

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	int				i;
	unsigned int	s;
	unsigned int	d;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	if (size < d)
		return (s + size);
	while (src[i] && d + 1 + i < size)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
