/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:52:55 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 15:27:24 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_bytes;
	const unsigned char		*src_bytes;
	size_t					i;

	if (!dest && !src)
		return (NULL);
	dest_bytes = (unsigned char *)dest;
	src_bytes = (const unsigned char *)src;
	i = 0;
	if (dest_bytes > src_bytes)
	{
		while (n > i)
		{
			dest_bytes[n - 1] = src_bytes[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest_bytes, src_bytes, n);
	return (dest);
}

/*int main(void)
{
	char buffer[20] = "42 Porto";
	printf("Before: %s\n", buffer);
	ft_memmove(buffer, NULL, 0);
	memmove(buffer, NULL, 0);
	printf("After: %s\n", buffer);
	return (0);
}*/
