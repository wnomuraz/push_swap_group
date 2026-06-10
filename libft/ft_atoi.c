/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:16:47 by willpere          #+#    #+#             */
/*   Updated: 2026/04/28 16:46:01 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("   42"));
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("   +42"));
	printf("%d\n", ft_atoi("0042"));
	printf("%d\n", ft_atoi("-0042"));
	printf("%d\n", ft_atoi("42abc"));
	printf("%d\n", ft_atoi("abc42"));
	printf("%d\n", ft_atoi("   +--42"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("   +00123abc"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	return (0);
}*/