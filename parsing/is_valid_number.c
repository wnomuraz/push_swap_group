/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:00:35 by willpere          #+#    #+#             */
/*   Updated: 2026/06/16 19:05:17 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid_number(char **args_matrix, int elements)
{
	int		i;
	int		j;

	i = 0;
	while (i < elements)
	{
		j = 0;
		if (args_matrix[i][j] == '+' || args_matrix[i][j] == '-')
			j++;
		if (args_matrix[i][j] == '\0')
			return (0);
		while (args_matrix[i][j])
		{
			if (ft_isdigit(args_matrix[i][j]))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
