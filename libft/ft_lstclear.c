/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:46:29 by willpere          #+#    #+#             */
/*   Updated: 2026/04/27 12:26:33 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*void del_content(void *content)
{
	free(content);
}

int	main(void)
{
		t_list	*head;
		t_list	*current;

		head = ft_lstnew(ft_strdup("one"));
		head->next = ft_lstnew(ft_strdup("two"));
		head->next->next = ft_lstnew(ft_strdup("three"));
		current = head;
		printf("Antes: ");
		while (current)
		{
			printf("%s", (char *)current->content);
			if (current->next)
				printf(" - ");
			current = current->next;
		}
		printf("\n");

		ft_lstclear(&head, del_content);

		if (!head)
			printf("Depois: lista apagada\n");

		return (0);
}*/