/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:22:53 by willpere          #+#    #+#             */
/*   Updated: 2026/04/24 14:08:42 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	c;

	number = n;
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	if (number >= 10)
		ft_putnbr_fd((number / 10), fd);
	c = (number % 10) + 48;
	write(fd, &c, 1);
}

/*int main()
{
	ft_putnbr_fd(-42, 1);
	return (0);
}*/