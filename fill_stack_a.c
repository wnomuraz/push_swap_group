/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 09:47:00 by willpere          #+#    #+#             */
/*   Updated: 2026/06/10 10:24:15 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_matrix(char **args_matrix, int elements)
{
	ft_free_split(args_matrix, elements);
	write(2, "Error\n", 6);
	exit(1);
}

void	fill_stack_a(t_stack **stack_a, int argc, char **argv)
{
	char		**args_matrix;
	int			elements;
	int			i;
	long long	number;

	args_matrix = parse_arguments(argc, argv);
	if (!args_matrix)
		return ;
	elements = count_elements(args_matrix);
	if (!is_valid_number(args_matrix, elements))
		clear_matrix(args_matrix, elements);
	i = 0;
	while (i < elements)
	{
		number = push_swap_atoi(args_matrix[i]);
		if (number > INT_MAX || number < INT_MIN)
			clear_matrix(args_matrix, elements);
		
		i++;	
	}
}
