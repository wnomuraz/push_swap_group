/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:17:26 by willpere          #+#    #+#             */
/*   Updated: 2026/04/30 14:50:29 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*void ft_del_content(void *content)
{
	free(content);
}

void *ft_all_to_x(void *content)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup((const char *)content);
	while (str[i])
	{
		str[i] = 'x';
		i++;
	}
	return (str);
}

int	main(void)
{
		t_list	*head;
		t_list	*current;
		t_list	*result;
		t_list	*temp;

		head = ft_lstnew(ft_strdup("one"));
		head->next = ft_lstnew(ft_strdup("two"));
		head->next->next = ft_lstnew(ft_strdup("three"));
		current = head;
		printf("Antes: \n");
		while (current)
		{
			printf("%s", (char *)current->content);
			if (current->next)
				printf("\n");
			current = current->next;
		}
		printf("\n");

		result = ft_lstmap(head, ft_all_to_x, ft_del_content);
		temp = result;
		while (result != NULL)
		{
			printf("%s\n", (char *)result->content);
			result = result->next;
		}
		ft_lstclear(&temp, ft_del_content);
		ft_lstclear(&head, ft_del_content);
		return (0);
	}*/