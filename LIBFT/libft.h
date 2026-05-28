/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:43:00 by hrique            #+#    #+#             */
/*   Updated: 2026/05/28 18:13:08 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* se a macro LIBFT_H não foi definida anteriormente */
#ifndef LIBFT_H

/* defina LIBFT_H */
# define LIBFT_H

/* bibliotecas inclusas, sempre dar espaço após o # */
/*<stddef.h> inclui size_t e NULL*/
# include <stddef.h>
/* \/ aqui vem os prototipos das funções */

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);

/* encerra o bloco condicional */
#endif