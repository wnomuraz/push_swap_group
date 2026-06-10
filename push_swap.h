/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:34:08 by willpere          #+#    #+#             */
/*   Updated: 2026/06/10 09:52:31 by willpere         ###   ########.fr       */
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
	int				pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int		main(int argc, char **argv);
int		count_elements(char **args_matrix);
int		total_length(int argc, char **argv);
int		is_valid_number(char **args_matrix, int elements);
int		push_swap_atoi(char *nptr);
void	fill_stack_a(t_stack **stack_a, int argc, char argv);
void	ft_free_split(char **result, size_t size);
char	**parse_arguments(int argc, char **argv);

#endif
