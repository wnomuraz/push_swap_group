/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:58:07 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 19:00:44 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string 's' to the given file descriptor 'fd', followed by a newline character.
**
** The function first checks if the string 's' is not NULL and if the file descriptor 'fd' is valid (not zero). If either of these conditions is not met, the function returns without performing any operations.
** If the conditions are met, the function calls 'ft_putstr_fd' to output the string 's' to the specified file descriptor. After that, it calls 'ft_putchar_fd' to output a newline character ('\n') to the same file descriptor, effectively adding a new line after the string.
** Parameters:
** - s: The string to be output.
** - fd: The file descriptor to which the output will be written.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
