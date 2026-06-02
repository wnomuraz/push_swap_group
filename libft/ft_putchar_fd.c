/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:57:50 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 19:01:48 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the character 'c' to the given file descriptor 'fd'.
**
** The function uses the 'write' system call to write the character 'c' to the specified file descriptor 'fd'. The 'write' function takes three parameters: the file descriptor to write to, a pointer to the data to be written (in this case, the address of 'c'), and the number of bytes to write (which is 1 for a single character).
** Parameters:
** - c: The character to be output.
** - fd: The file descriptor to which the output will be written.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
