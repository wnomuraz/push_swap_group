/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:02:13 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 15:46:49 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char to_upper_even(unsigned int i, char c)
// {
//  if (i % 2 == 0 && c >= 'a' && c <= 'z')
//	return (c - 32);
//  return (c);
// }

// int main()
// {
//     char *result;

//     result = ft_strmapi("hello", to_upper_even);

//     printf("%s\n", result);

//     return (0);
// }
