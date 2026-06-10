/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: willpere <willpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:48:04 by willpere          #+#    #+#             */
/*   Updated: 2026/06/05 12:06:42 by willpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **result, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(result[i++]);
	free(result);
}

static char	*ft_extract_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;
	char	*word;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = ft_extract_word(s, c, &i);
			if (!result[j])
				return (ft_free_split(result, j), NULL);
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

/*int main(void)
{
    char **result;
    size_t i;

    result = ft_split("42", ' ');
    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
		free(result[i]);
        i++;
    }
	free(result);
    return (0);
}*/