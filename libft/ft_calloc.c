/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:04:50 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 16:30:10 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*mem;
	size_t	total_size;

	total_size = size * nmemb;
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total_size);
	return (mem);
}

// int main()
// {
//     int *arr = ft_calloc(5, sizeof(int));

//     if (!arr)
//		return (1);

//     for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]);

//     free(arr);
//     return (0);
// }