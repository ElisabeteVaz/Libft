/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:51:11 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:51:11 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = 0;
	if (s[i] == 0 && c == 0)
		return ((char *)& s[i]);
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			tmp = (char *)&s[i];
		i++;
		if (s[i] == 0 && c == 0)
			return ((char *)&s[i]);
	}
	if (tmp != 0)
		return (tmp);
	return (0);
}
