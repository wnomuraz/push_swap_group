/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:00:08 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 15:43:15 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*ptr;

	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
//     char *str = "42 Porto";
//     char *dup = ft_strdup(str);

//     printf("Original: %s\n", str);
//     printf("Copy: %s\n", dup);

//     free(dup);
//     return (0);
// }
