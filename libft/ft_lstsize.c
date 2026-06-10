/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:30:44 by willpere          #+#    #+#             */
/*   Updated: 2026/04/24 15:55:03 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/*int main(void)
{
	t_list *my_list;
	int i = 0;
	t_list *new;
	t_list *temp;
	
	my_list = NULL;
	while (i < 10)
	{
		new = ft_lstnew("Porto");
		ft_lstadd_front(&my_list, new);
		i++;
	}
	int len = ft_lstsize(my_list);
	printf("%d", len);
	while (my_list)
	{
		temp = my_list->next;
		free(my_list);
		my_list = temp;
	}
	return (0);
}*/