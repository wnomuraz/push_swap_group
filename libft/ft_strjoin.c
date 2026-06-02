/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:01:13 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 15:41:40 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*ptr;
	size_t	i;
	size_t	j;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (total_size + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < total_size)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main ()
// {
// 	char str1[] = "ola ";
// 	char str2[] = "mundo";

// 	printf("%s", ft_strjoin(str1, str2));
// 	return (0);
// }