/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:30:02 by willpere          #+#    #+#             */
/*   Updated: 2026/05/04 11:20:32 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*void del_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node;
	char *str;

	str = ft_strdup("42 Porto");
	node = ft_lstnew(str);
	if (!node)
		return (1);
	printf("Antes: %s\n", (char *)node->content);
	ft_lstdelone(node, NULL);
	printf("Depois: %s\n", (char *)node->content);
	return (0);
}*/