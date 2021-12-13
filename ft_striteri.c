/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:52:33 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:52:33 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies the function f to each character of the string passed as argument, 
* and passing its index as first argument. 
* Each character is passed by address to f to be modified if necessary
 * 
 * void ft_striteri(char *s, void (*f)(unsigned int,char*));
 *
 * #1: The string on which to iterate.
 * #2: The function to apply to each character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
