/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:10:42 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 15:27:17 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_bytes;
	const unsigned char		*src_bytes;
	size_t					i;

	if (!dest && !src)
		return (NULL);
	dest_bytes = (unsigned char *) dest;
	src_bytes = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dest_bytes[i] = src_bytes[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char source[] = "42 Porto";
	char destination[10];
	printf("Before: %s\n", destination);
	ft_memcpy(destination, source, 10);
	printf("After: %s\n", destination);	
	return (0);
}*/