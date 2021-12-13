/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:53:42 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:53:42 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*ptr;
	unsigned char	letra;
	size_t			i;

	str = (unsigned char *)s;
	ptr = (unsigned char *)s;
	letra = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = letra;
		i++;
	}
	return ((void *)str);
}
