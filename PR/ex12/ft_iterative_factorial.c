/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:36:35 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/18 15:08:30 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
		num *= --nb;
	return (num);
}

/*int	main(void)
{
	int	num;

	num = ft_iterative_factorial(9);
	printf("%d", num);
	return (0);
}*/
