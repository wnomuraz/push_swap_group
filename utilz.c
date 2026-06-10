/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilz.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:55:41 by romdo-na          #+#    #+#             */
/*   Updated: 2026/06/05 16:40:11 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// o "s" eh de "swap"

// sa - Troca os dois primeiros da stack A.
// sb - Troca os dois primeiros da stack B.
// ss - sa e sb ao mesmo tempo.

// o "p" eh de "push"

// pa - Move de B para A.
// pb - Move de A para B.

// o "r" eh de "rotate"

// ra - Gira para cima stack A.
// rb - Gira para cima stack B.
// rr - Gira para cima as duas stacks.

// rra - Gira para baixo stack A.
// rrb - Gira para baixo stack B.
// rrr - Gira para baixo as duas stacks.

// Parsing = validacao do argumentos
// Indexação = colocar os numeros em ordem e colocar index

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (!*a || !(*a)->next)
		return ;
	first = *a;   //4 -> 2
	second = first->next;  //2
	first->next = second->next; //2 -> 7
	second->next = first; //4
	*a = second; //2
	write(1, "sa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}