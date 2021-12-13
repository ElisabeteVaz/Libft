/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:52:06 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:52:06 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copy from one string to another - source to dstination

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	const char		*s;
	unsigned int	n;

	s = src;
	n = size;
	if (!src)
		return (0);
	if (n != 0)
	{
		while (--n != 0)
		{
			*dst = *s++;
			if (*dst++ == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
