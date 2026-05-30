/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:55:38 by hrique            #+#    #+#             */
/*   Updated: 2026/05/29 21:28:04 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*t_big;
	unsigned char	*t_little;

	i = 0;
	j = 0;
	t_big = (unsigned char *)big;
	t_little = (unsigned char *)little;
	if (ft_strlen(t_little) == 0)
		return (big);
	ft_strncmp()
}
