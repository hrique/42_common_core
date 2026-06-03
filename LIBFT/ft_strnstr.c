/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:55:38 by hrique            #+#    #+#             */
/*   Updated: 2026/06/02 20:17:03 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*t_big;
	char	*t_little;

	i = 0;
	t_big = (char *)big;
	t_little = (char *)little;
	if (ft_strlen(little) == 0)
		return (t_big);
	while (t_big[i] != '\0' && i < len)
	{
		j = 0;
		while (t_little[j] != '\0' && \
t_big[i + j] == t_little[j] && ((i + j) < len))
			j++;
		if (t_little[j] == '\0')
			return (&t_big[i]);
		i++;
	}
	return (NULL);
}
