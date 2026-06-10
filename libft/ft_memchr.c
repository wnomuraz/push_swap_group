/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:42:26 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 15:30:01 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*bytes;
	unsigned char		bytes_value;
	size_t				i;

	i = 0;
	bytes = (const unsigned char *)s;
	bytes_value = (unsigned char)c;
	while (i < n)
	{
		if (bytes[i] == bytes_value)
			return ((void *)&bytes[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char data[] = { 'A', 'B', '\0', 'C', 'D' };
	printf("%p", ft_memchr(data, 'B', 5));
	return (0);
}*/
