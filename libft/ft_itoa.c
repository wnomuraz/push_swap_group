/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:07:26 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 13:07:29 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = get_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

// int main(void)
// {
// 	char *res;

// 	res = ft_itoa(0);
// 	printf("0 -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(42);
// 	printf("42 -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(123456);
// 	printf("123456 -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(-42);
// 	printf("-42 -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(-123456);
// 	printf("-123456 -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(INT_MAX);
// 	printf("INT_MAX -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(INT_MIN);
// 	printf("INT_MIN -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(1000);
// 	printf("1000 -> %s\n", res);
// 	free(res);

// 	res = ft_itoa(-1);
// 	printf("-1 -> %s\n", res);
// 	free(res);

// 	return (0);
// }
