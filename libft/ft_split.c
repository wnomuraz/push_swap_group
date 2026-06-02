/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:59:23 by romdo-na          #+#    #+#             */
/*   Updated: 2026/05/09 17:09:03 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_split(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c);
			if (!words[j])
				return (free_split(words), NULL);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

// void	print_split(char **arr)
// {
// 	int	i;

// 	i = 0;
// 	if (!arr)
// 	{
// 		printf("Result is NULL\n");
// 		return ;
// 	}
// 	while (arr[i] != (void *)0)
// 	{
// 		printf("Word %d: %s\n", i, arr[i]);
// 		i++;
// 	}
// }

// int main(void)
// {
// 	char **result;

// 	printf("=== Test 1 ===\n");
// 	result = ft_split("ola mundo 42", ' ');
// 	print_split(result);
// 	free_split(result);

// 	printf("\n=== Test 2 ===\n");
// 	result = ft_split("		ola	mundo	", ' ');
// 	print_split(result);
// 	free_split(result);

// 	printf("\n=== Test 3 ===\n");
// 	result = ft_split("abcdef", ' ');
// 	print_split(result);
// 	free_split(result);

// 	printf("\n=== Test 4 ===\n");
// 	result = ft_split("", ' ');
// 	print_split(result);
// 	free_split(result);

// 	printf("\n=== Test 5 ===\n");
// 	result = ft_split("		 ", ' ');
// 	print_split(result);
// 	free_split(result);

// 	return (0);
// }
