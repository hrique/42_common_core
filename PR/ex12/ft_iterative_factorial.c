/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:36:35 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/15 18:44:17 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb < 0)
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
