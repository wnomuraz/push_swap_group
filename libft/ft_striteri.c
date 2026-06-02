/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:00:56 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 15:43:26 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// int	main(void)
// {
// 	char	str;

// 	str = "hello";
// 	ft_striteri(str, to_upper);
// 	printf("%s\n", str);
// 	return (0);
// }
