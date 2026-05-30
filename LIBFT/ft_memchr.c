/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:00:19 by hrique            #+#    #+#             */
/*   Updated: 2026/05/29 18:21:41 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_s;
	unsigned char	x;

	i = 0;
	pt_s = (unsigned char *)s;
	x = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (pt_s[i] == x)
			return (&pt_s[i]);
		i++;
	}
	if (pt_s[i] == x)
		return (&pt_s[i]);
	return (NULL);
}
