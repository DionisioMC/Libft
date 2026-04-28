/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:13:36 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/28 14:42:26 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			words++;
		}
		i++;
	}
	return (words);
}

static char	**free_data(char **split, int i)
{
	i--;
	while (i)
	{
		free(split[i]);
		i--;
	}
	free(split);
	return (NULL);
}

static char	**create_arr(const char *s, char c, char **split)
{
	int		i;
	int		char_count;
	int		word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			char_count = 0;
			while (s[i + char_count] != c && s[i + char_count] != '\0')
				char_count++;
			split[word_count] = ft_substr(s, i, char_count);
			if (!split[word_count])
				return (free_data(split, word_count - 1));
			while (s[i] && s[i] != c)
				i++;
			word_count++;
		}
		else
			i++;
	}
	split[word_count] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	create_arr(s, c, split);
	return (split);
}
