/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:34:08 by willpere          #+#    #+#             */
/*   Updated: 2026/06/17 17:18:27 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct moves
{
	int sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int rr;
	int	rra;
	int	rrb;
	int	rrr;
}	moves;

int			main(int argc, char **argv);
int			count_elements(char **args_matrix);
int			total_length(int argc, char **argv);
int			is_valid_number(char **args_matrix, int elements);
long long	push_swap_atoi(const char *nptr);
int			check_duplicate(t_stack *stack_a, int number);
int			stack_add_last(t_stack **stack_a, int number);
char		**parse_arguments(int argc, char **argv);
void		fill_stack_a(t_stack **stack_a, int argc, char **argv);
void		free_split(char **result, size_t size);
void		free_stack(t_stack **stack_a);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **stack);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);

int	get_disorder(t_stack *stack);
double	disorder_ratio(t_stack *stack);


t_stack		*stack_last(t_stack *stack);
void		start(moves **movements);


#endif
