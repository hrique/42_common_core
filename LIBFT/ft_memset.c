/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henriqueframeschi <henriqueframeschi@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:59:52 by henriquefra       #+#    #+#             */
/*   Updated: 2026/05/25 20:53:44 by henriquefra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memset(void *s, int c, size_t n)
{
	unsigned char   *temp;
	size_t i;

	i = 0;
	temp = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}