/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:53:16 by willpere          #+#    #+#             */
/*   Updated: 2026/04/28 10:52:05 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	char	letter;

	letter = (unsigned char) c;
	if (letter >= 65 && letter <= 90)
		return (letter += 32);
	return (c);
}

/*#include "libft.h"

int main()
{
	printf("%c", ft_tolower('A'));
	return (0);
}*/