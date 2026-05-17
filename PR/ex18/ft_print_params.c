/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 22:35:30 by hrique            #+#    #+#             */
/*   Updated: 2026/05/16 23:28:42 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write (1, &c, 1);
}*/

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	if (argc == 1)
		return (1);
	while (i < argc)
	{
		c = 0;
		while (argv[i][c] != '\0')
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
