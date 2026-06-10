/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:29:38 by willpere          #+#    #+#             */
/*   Updated: 2026/06/10 10:05:43 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;

    if (argc < 2)
        return (0);
	fill_stack_a(&stack_a, argc, argv);
	
    return (0);
}
