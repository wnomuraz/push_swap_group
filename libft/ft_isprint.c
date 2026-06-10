/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:33:03 by willpere          #+#    #+#             */
/*   Updated: 2026/05/04 15:45:53 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_isprint(argv[1][0]));
	}	
	return (0);
}*/