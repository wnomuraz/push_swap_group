/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:28:20 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 12:03:02 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_size(long n)
{
	long	size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size = 1;
	}
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	number;
	int		i;
	int		size;

	number = n;
	size = ft_check_size(n);
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = '\0';
	i = size - 1;
	if (number < 0)
		number *= -1;
	while (i >= 0)
	{
		result[i] = number % 10 + 48;
		number = number / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

/*int main()
{
	char *result = ft_itoa(42);
	printf("%s", result);
	free(result);
	return (0);
}*/