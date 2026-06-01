/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:54:51 by hesantan          #+#    #+#             */
/*   Updated: 2026/06/01 17:02:39 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	max;
	size_t	i;

	i = 0;
	max = (size_t)-1;
	if (nmemb > 0 && size > (max / nmemb))
		return (NULL);
	ptr = malloc(size * nmemb);
	while (i < nmemb)
	{
		ft_bzero
	}
}
