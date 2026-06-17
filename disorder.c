/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 17:10:26 by romdo-na          #+#    #+#             */
/*   Updated: 2026/06/17 17:12:48 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_disorder(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack && stack->next)
	{
		if (stack->index > stack->next->index)
			count++;
		stack = stack->next;
	}
	return (count);
}

double	disorder_ratio(t_stack *stack)
{
	int	disorder;
	int	size;

	disorder = get_disorder(stack);
	size = stack_size(stack);

	if (size <= 1)
		return (0.0);

	return ((double)disorder / (size - 1));
}