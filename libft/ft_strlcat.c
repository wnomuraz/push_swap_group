/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:58:05 by willpere          #+#    #+#             */
/*   Updated: 2026/04/28 10:45:55 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (len < size && dst[len])
		len++;
	if (len == size)
	{
		while (src[i])
			i++;
		return (size + i);
	}
	while (src[i] && len + i < size - 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = 0;
	while (src[i])
		i++;
	return (len + i);
}

/*int main()
{
	char src[] = "Is this just fantasy?";
	char dst[] = "Is it the real life? ";
	printf("%zu", ft_strlcat(dst, src, 43));
	printf("\n%s", dst);
	return (0);		
}*/