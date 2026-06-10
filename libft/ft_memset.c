/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:28:54 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 15:31:05 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*bytes;
	unsigned char	byte_value;
	size_t			i;

	bytes = (unsigned char *) s;
	byte_value = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		bytes[i] = byte_value;
		i++;
	}
	return (s);
}

/*int main(void)
{
	char buffer[10] = "ABC";
	ft_memset(buffer, '0', 10);
	printf("%s", buffer);
	return (0);
}*/
