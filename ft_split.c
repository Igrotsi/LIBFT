/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:26:15 by flahalle          #+#    #+#             */
/*   Updated: 2024/11/25 19:49:55 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_c(char const *s, char c)
{
	int	count;
	int	i;

	if (!s || !s[0])
		return (0);
	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
		}
		else
		{
			i++;
		}
	}
	if (s[i - 1] != c && i > 0)
		count++;
	return (count);
}

static char	*split_word(char const *s, char c)
{
	char	*split_word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c && s[i])
		i++;
	split_word = ft_calloc(sizeof(char), (i + 1));
	if (split_word == NULL)
		return (NULL);
	while (j < i)
	{
		split_word[j] = s[j];
		j++;
	}
	split_word[j] = '\0';
	return (split_word);
}

static void	free_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**big_array;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	big_array = ft_calloc(sizeof(char *), (count_c(s, c) + 1));
	if (!big_array)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			big_array[i] = split_word(s, c);
			if (!big_array[i])
				return (free_array(big_array, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	big_array[i] = NULL;
	return (big_array);
}
