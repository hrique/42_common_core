/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:31:16 by hrique            #+#    #+#             */
/*   Updated: 2026/05/29 15:44:35 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*pt;

	pt = (char *)s;
	i = ft_strlen(pt);
	while (i > 0)
	{
		if (pt[i] == (char)c)
			return (&pt[i]);
		i--;
	}
	if (pt[i] == (char)c)
		return (&pt[i]);
	return (NULL);
}
