/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_rank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:53:52 by willpere          #+#    #+#             */
/*   Updated: 2026/06/18 14:33:09 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_rank(t_stack **stack)
{
	t_stack	*i;
	t_stack	*j;
	
	i = *stack;
	while (i)
	{
		j = *stack;
		i->rank = 1;
		while (j)
		{
			if (i->value > j->value)
				i->rank++;
			j = j->next;
		}
		i = i->next;
	}
}