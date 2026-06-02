/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:01:29 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 15:43:40 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
//     char dst1[20] = "Hello";
//     char src1[] = " World";

//     char dst2[10] = "Hello";
//     char src2[] = " World";

//     char dst3[5] = "Hello";
//     char src3[] = " World";

//     size_t ret;

//     // 🔹 Caso 1: espaço suficiente
//     ret = ft_strlcat(dst1, src1, sizeof(dst1));
//     printf("Case 1:\n");
//     printf("Result: %s\n", dst1);
//     printf("Return: %zu\n\n", ret);

//     // 🔹 Caso 2: truncamento
//     ret = ft_strlcat(dst2, src2, sizeof(dst2));
//     printf("Case 2:\n");
//     printf("Result: %s\n", dst2);
//     printf("Return: %zu\n\n", ret);

//     // 🔹 Caso 3: sem espaço nenhum
//     ret = ft_strlcat(dst3, src3, sizeof(dst3));
//     printf("Case 3:\n");
//     printf("Result: %s\n", dst3);
//     printf("Return: %zu\n\n", ret);

//     return (0);
// }
