/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:57:32 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 19:16:22 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** The 'ft_memset' function fills the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'c'. It returns a pointer to the memory area 's'.
** The function takes three parameters:
** - s: A pointer to the memory area to be filled.
** - c: The byte value to be set (converted to an unsigned char).
** - n: The number of bytes to be set to the value of 'c'.
** The function iterates through the memory area, setting each byte to the specified value until it has set 'n' bytes. Finally, it returns the pointer to the memory area 's'.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sta;

	i = 0;
	sta = (unsigned char *)s;
	while (i < n)
	{
		sta[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
