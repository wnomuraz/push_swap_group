/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:48:24 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 15:06:04 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *head;
	t_list *new_node;

	head = ft_lstnew("World");
	new_node = ft_lstnew("Hello");
	ft_lstadd_front(&head, NULL);

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);

	free(head->next);
	free(head);
	return (0);

}*/