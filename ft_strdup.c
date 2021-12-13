/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:52:39 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:52:39 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (str1[size])
		++size;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		new[i] = str1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
