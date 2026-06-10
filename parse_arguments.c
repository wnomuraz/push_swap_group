/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:48:09 by willpere          #+#    #+#             */
/*   Updated: 2026/06/09 17:00:27 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_arguments(int argc, char **argv)
{
	char	*args;
	char	**matrix;
	int		i;
	int		j;
	int		k;

	args = malloc(total_length(argc, argv));
	if (!args)
		return (NULL);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			args[k++] = argv[i][j++];
		if (i < argc - 1)
			args[k++] = ' ';
		i++;
	}
	args[k] = '\0';
	matrix = ft_split(args, ' ');
	free(args);
	return (matrix);
}
