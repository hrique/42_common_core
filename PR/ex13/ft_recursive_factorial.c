/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:44:47 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/18 15:07:29 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb *= ft_recursive_factorial(nb -1));
}

/*int	main(void)
{
	int	num;

	num = ft_recursive_factorial(4);
	printf("%d", num);
	return (0);
}*/
