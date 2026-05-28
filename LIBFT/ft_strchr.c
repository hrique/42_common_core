/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:37:15 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/28 18:21:21 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*pt;

	i = 0;
	while ((s[i] != '\0') && ((char)c != (char)s[i]))
	{
		if ((char)s[i] == c)
			return ((char *)s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return (s[i]);
	return (NULL);
}
