/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:35:14 by willpere          #+#    #+#             */
/*   Updated: 2026/04/27 10:53:55 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("one");
	b = ft_lstnew("two");
	c = ft_lstnew("three");

	a->next = b;
	b->next = c;
	c->next = NULL;

	printf("%s\n", (char *)ft_lstlast(a)->content);

	free(a);
	free(b);
	free(c);
	return (0);
}*/