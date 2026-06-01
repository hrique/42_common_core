/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:21:54 by hesantan          #+#    #+#             */
/*   Updated: 2026/06/01 14:49:55 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*x;
	int		num;
	int		i;
	int		neg;

	i = 0;
	num = 0;
	neg = 1;
	x = (char *)nptr;
	while (x[i] == ' ' || (x[i] >= 9 && x[i] <= 13))
		i++;
	if (x[i] == '+' || x[i] == '-')
	{
		if (x[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(x[i]))
	{
		num = (num * 10) + (x[i] - '0');
		i++;
	}
	num = num * neg;
	return (num);
}
