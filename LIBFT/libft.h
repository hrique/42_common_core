/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrique <hrique@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:43:00 by hrique            #+#    #+#             */
/*   Updated: 2026/05/25 23:36:13 by hrique           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* se a macro LIBFT_H não foi definida anteriormente */
#ifndef LIBFT_H

/* defina LIBFT_H */
# define LIBFT_H

/* bibliotecas inclusas, sempre dar espaço após o # */
# include <stdlib.h>
# include <unistd.h>

/* \/ aqui vem os prototipos das funções */

void	bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);

/* encerra o bloco condicional */
#endif