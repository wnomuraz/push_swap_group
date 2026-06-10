/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:37:29 by willpere          #+#    #+#             */
/*   Updated: 2026/04/29 11:33:40 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	int	i;
	int *array;
	
	array = ft_calloc(5, sizeof(int));
	if (!array)
		return (1);
		
	i = 0;
	while (i < 5)
	{
		printf("Array %d: %d\n", i+1, array[i]);
		i++;
	}
	free(array);
	return (0);
}*/