# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrique <hrique@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/22 16:38:00 by hrique            #+#    #+#              #
#    Updated: 2026/05/25 23:42:55 by hrique           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## nome do arquivo gerado
NAME = libft.a

## define as flags do compilador
CFLAGS = -Wall -Wextra -Werror

## listar todos os arquivos .c separados por '\', menos no ultimo arquivo.
SRCS = ft_bzero.c \
	ft_memcpy.c \
	ft_memset.c

## pegue tudo que esta em SRCS e mude de .c para .o
OBJS = $(SRCS:.c=.o)

## alvo padrão (all), ao digitar apenas make no terminal ele executa o all.
all: $(NAME)

## diz que para criar o NAME precisa que todos os OBJS existam
$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)
## ar(archiver) junta os arquivos .o
## rcs = replace old files, create if no exist, sort.

## para qualquer arquivo .o procure por um arquivo .c com mesmo nome.
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
## $< representa o comando mais a esquerda %.c
## $@ representa o nome do alvo (arquivo .o)

clean:
	rm -f $(OBJS)
## remove sem pedir confirmação os arquivos .o

fclean: clean
	rm -f $(NAME)
## remove os objs(.o) e o arquivo .a gerado

re: fclean all
## rebuild(recompilar), limpa tudo e compila novamente

.PHONY: all clean fclean re
## indica ao make que o all, clean, fclean e re são comando e não arquivos.
## serve para caso você tenha um arquivo clean.c e que ele possa ser compilado