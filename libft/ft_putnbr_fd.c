/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:58:19 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 18:59:46 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer 'n' to the given file descriptor 'fd'.
**
** The function first checks if the number is negative. If it is, it outputs a '-' character and converts the number to its positive equivalent.
** Then, it recursively calls itself to handle the digits of the number. If the number is greater than or equal to 10, it divides the number by 10 and calls itself again to process the next digit.
** Finally, it outputs the last digit of the number by taking the modulus 10 and adding '0' to convert it to its corresponding ASCII character.
** Parameters:
** - n: The integer to be output.
** - fd: The file descriptor to which the output will be written.
*/		

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}
