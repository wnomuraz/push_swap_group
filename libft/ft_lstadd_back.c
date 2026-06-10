/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:57:34 by willpere          #+#    #+#             */
/*   Updated: 2026/04/27 11:28:41 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*int main(void)
{
	t_list *a;
	t_list *b;
	t_list *head;
	t_list *new_node;

	a = ft_lstnew("Hello ");
	b = ft_lstnew("World ");
	new_node = ft_lstnew("!!!");

	a->next = b;
	b->next = NULL;

	head = a;

	ft_lstadd_back(&head, new_node);

	while (head != NULL)
	{
		printf("%s", (char *)head->content);
		head = head->next;		
	}
	
	
	free(a);
	free(b);
	free(new_node);

	return (0);

}*/