/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:52:08 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 13:51:53 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void ft_change_index(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}
	
int main()
{
	char s[] = "Willian";
	printf("%s\n", s);
	ft_striteri(s, ft_change_index);
	printf("%s", s);
	return (0);
}*/