/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:03:11 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 16:03:53 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     char str[] = "hello world";
//     char *result;

//     result = strrchr(str, 'o');

//     if (result != NULL)
//		printf("Found: %s\n", result);
//     else
//		printf("Not found\n");

//     return (0);
// }
