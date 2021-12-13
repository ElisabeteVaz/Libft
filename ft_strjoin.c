/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:52:23 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:52:23 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*res;
	int		len1;
	int		len2;

	a = 0;
	b = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	while (s1[a] != '\0')
	{
		res[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		res[a] = s2[b];
		b++;
		a++;
	}
	res[a] = '\0';
	return (res);
}
