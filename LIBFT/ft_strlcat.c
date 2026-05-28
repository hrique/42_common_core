/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:11:35 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/28 15:56:49 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ct_dst;
	size_t	ct_src;

	ct_dst = ft_strlen(dst);
	ct_src = ft_strlen(src);
	if (size <= ct_dst)
		return (size + ct_src);
	i = 0;
	while ((ct_dst + i < size -1) && (src[i] != '\0'))
	{
		dst[ct_dst + i] = src[i];
		i++;
	}
	dst[ct_dst + i] = '\0';
	return (ct_dst + ct_src);
}
