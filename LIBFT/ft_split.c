/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:58:06 by hesantan          #+#    #+#             */
/*   Updated: 2026/06/05 17:59:48 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ct_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i++;
		}
		if (s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

static size_t	ct_size(char const *s, char c, size_t start)
{
	size_t	size;

	size = 0;
	if (s[start] != '\0')
	{
		while (s[start] != c && s[start] != '\0')
		{
			size++;
			start++;
		}
	}
	return (size);
}

static char	*free_list(char *list, size_t index)
{
	while (index > 0)
	{
		index--;
		free(list[index]);
	}
	free(list);
	return (list);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	start;
	char	**list;

	words = ct_words(s, c);
	list = malloc((words + 1) * sizeof(char *));
	if (list == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		start = 0;
		if (s[j] == c)
		{
			while (s[j] == c)
				j++;
		}	
		size = ct_size(s, c, j);
		list[i] = malloc((size + 1) * sizeof(char));
		if (list[i] == NULL)
			free_list(list, i);
		start = 0;
		while (start < size)
		{
			list[i][start] = s[j];
			j++;
			start++;
		}
		list[i][start] = '\0';
		i++;
		j = size + j;
	}
}
	list[i] = NULL;
	return (list);
}
