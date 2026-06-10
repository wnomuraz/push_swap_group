/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:31:41 by willpere          #+#    #+#             */
/*   Updated: 2026/06/10 10:45:06 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_all_to_x(void *content)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)content;
	while (str[i])
	{
		str[i] = 'x';
		i++;
	}
}

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	char	*str;

	str = ft_strdup("Willian");
	if (!str)
		return (1);
	lst = ft_lstnew(str);
	if (!lst)
	{
		free(str);
		return (1);
	}
	printf("Antes: %s\n", (char *)lst->content);
	ft_lstiter(lst, ft_all_to_x);
	printf("Depois: %s\n", (char *)lst->content);
	ft_lstclear(&lst, del_content);
	return (0);
}*/