/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:29:38 by willpere          #+#    #+#             */
/*   Updated: 2026/06/16 17:04:41 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	view_stack(t_stack *stack)
{	
	t_stack	*current;

	current = stack;
	if (!current)
		printf("The stack is empty!\n");
	while (current != NULL)
	{
		printf("%d\n", current->value);
		current = current->next;		
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	moves	*movements;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	fill_stack_a(&stack_a, argc, argv);
	
	free_stack(&stack_a);
	return (0);
}
