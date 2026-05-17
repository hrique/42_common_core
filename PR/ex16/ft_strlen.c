/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:07:57 by hesantan          #+#    #+#             */
/*   Updated: 2026/05/15 18:53:10 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str++)
		i++;
	return (i);
}

/*int	main(void)
{
	char	word[] = "teste";
	int		count;

	count = ft_strlen(word);
	printf("%d", count);
	return (0);
}*/
