/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:04:47 by willpere          #+#    #+#             */
/*   Updated: 2026/06/15 12:45:23 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_add_last(t_stack **stack_a, int number)
{
	t_stack	*new_node;
	t_stack	*last;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->value = number;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*stack_a == NULL)
	{
		*stack_a = new_node;
		return (1);
	}
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (1);
}
