/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:20:49 by willpere          #+#    #+#             */
/*   Updated: 2026/04/22 12:44:56 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_isascii(argv[1][0]));
	}	
	return (0);
}*/