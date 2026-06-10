/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:40:56 by willpere          #+#    #+#             */
/*   Updated: 2026/06/09 16:17:09 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_elements(char **args_matrix)
{
	int	count;

	if (!args_matrix)
		return (0);
	count = 0;
	while (*args_matrix)
	{
		count++;
		args_matrix++;
	}
	return (count);
}

int	total_length(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		len++;
		i++;		
	}
	return (len);
}

void	ft_free_split(char **args_matrix, size_t elements)
{
	size_t	i;

	i = 0;
	while (i < elements)
		free(args_matrix[i++]);
	free(args_matrix);
}