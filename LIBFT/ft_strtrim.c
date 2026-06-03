/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 23:12:24 by hrique            #+#    #+#             */
/*   Updated: 2026/06/03 14:43:31 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (end == 0 || set[0] == '\0')
		return (ft_strdup(s1));
	while ((s1[start] != '\0') && (ft_strchr(set, s1[start]) != NULL))
		start++;
	while ((end > start) && (ft_strrchr(set, s1[end - 1]) != NULL))
		end--;
	ptr = malloc((end - start + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], (end - start + 1));
	return (ptr);
}
