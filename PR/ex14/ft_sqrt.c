/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 14:16:47 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/15 16:27:49 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;
	int	result;

	num = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (num <= nb)
	{
		result = num * num;
		if (result == nb)
			return (num);
		num++;
	}
	return (0);
}

/*int	main(void)
{
	int	result;

	result = ft_sqrt(16);
	printf("%d", result);
	return (0);
}*/
