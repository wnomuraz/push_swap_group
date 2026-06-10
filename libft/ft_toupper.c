/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:42:35 by willpere          #+#    #+#             */
/*   Updated: 2026/04/28 10:51:30 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char	letter;

	letter = (unsigned char) c;
	if (letter >= 97 && letter <= 122)
		return (letter -= 32);
	return (c);
}

/*#include "libft.h"

int main()
{
	printf("%c", ft_toupper('a'));
	return (0);
}*/