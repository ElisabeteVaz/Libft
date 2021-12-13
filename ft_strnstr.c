/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:51:18 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:51:18 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* function locates the	first occurrence of the	null-terminated string little 
* in the string big, where not more than	len charactersare searched.
* Characters that appear after a `\0' character are not searched.
* 
* strnstr(const char *big, const char *little, size_t len) */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		k;
	size_t	t;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && len-- > 0)
	{
		if (big[i++] == little[j])
		{
			k = i - 1;
			t = len + 2;
			while (little[j] != 0 && --t > 0)
				if (little[j++] != big[k++])
					k = 0;
			if (k && little[j] == 0)
				return ((char *)&big[i - 1]);
			j = 0;
		}
	}
	return (NULL);
}
