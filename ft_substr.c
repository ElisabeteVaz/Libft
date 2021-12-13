/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:50:54 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:50:54 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*sub;

	a = 0;
	b = 0;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	while (s[a] != '\0')
	{
		if (a >= start && b < len)
		{
			sub[b] = s[a];
			b++;
		}
		a++;
	}
	return (sub);
}
