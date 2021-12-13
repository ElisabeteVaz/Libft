/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:53:28 by evaz              #+#    #+#             */
/*   Updated: 2021/12/06 20:53:28 by evaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the character ’c’ to the given file descriptor.
 * 
 * void ft_putchar_fd(char c, int fd);
 *
 * #1: The character to output.
 * #2: The file descriptor on which to write.
 *
 * write(int fd, const void *buf, size_t nbytes)
 * #1: file descriptor or fd - The file code
 * #2: buf - The pointer to a buffer where the data is stored
 * #3: nbytes - The number of bytes to write from the buffer
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
