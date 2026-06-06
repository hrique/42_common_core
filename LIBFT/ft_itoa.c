/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:30:52 by hrique            #+#    #+#             */
/*   Updated: 2026/06/06 15:45:52 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*convert_num(long n, char *num, int len)
{
	if (n < 0)
	{
		n = n * -1;
		num[0] = '-';
	}
	num[len] = '\0';
	len--;
	while (n > 0)
	{
		num[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		len;
	long	nb;

	nb = (long)n;
	len = num_len(nb);
	c = malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	if (nb == 0)
	{
		c[1] = '\0';
		c[0] = '0';
		return (c);
	}
	convert_num(nb, c, len);
	return (c);
}
