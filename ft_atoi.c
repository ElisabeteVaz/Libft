/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:46:11 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:46:11 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//converts the string argument str to an integer (type int).

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	signal;

	i = 0;
	number = 0;
	signal = 1;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1 ;
		i++;
	}	
	if (str[i] < '0' && str[i] > '9')
		return (0);
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * signal);
}
