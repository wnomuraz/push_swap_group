/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:04:40 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 13:04:44 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*sta;

	sta = (unsigned char *)s;
	while (n > 0)
	{
		*sta = 0;
		sta++;
		n--;
	}
}
