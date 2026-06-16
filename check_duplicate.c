/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 11:24:38 by willpere          #+#    #+#             */
/*   Updated: 2026/06/15 13:47:13 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(t_stack *stack_a, int number)
{
	while (stack_a)
	{
		if (stack_a->value == number)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
