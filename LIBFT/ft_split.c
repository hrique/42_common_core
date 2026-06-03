/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:58:06 by hesantan          #+#    #+#             */
/*   Updated: 2026/06/03 17:45:46 by hesantan         ###   ########.fr       */
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
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (words);
}

static size_t	ct_letters(char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			end = i;
		}
		return (end - start);
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	size;
	size_t	i;
	char	**ptr;

	i = 0;
	words = ct_words(s, c);
	ptr = malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	while (i < words)
	{
		
	}

}
