/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:57:25 by willpere          #+#    #+#             */
/*   Updated: 2026/04/27 15:49:08 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bytes;
	size_t			i;

	bytes = s;
	i = 0;
	while (i < n)
	{
		bytes[i] = 0;
		i++;
	}
}

/*int main()
{
	int buffer = 123456;
	printf("Before ft_bzero: %d\n", buffer);
	ft_bzero(&buffer, sizeof(int));
	printf("After ft_bzero: %d\n", buffer);
	return (0);
}*/