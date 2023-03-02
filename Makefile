SRCS = $(addprefix Srcs/, ft_atoi.c ft_checker.c ft_checkposb.c ft_dispatch.c ft_double.c ft_handle.c ft_handle45.c \
	   ft_hchunk.c ft_papb.c ft_push_swap.c ft_pushback.c ft_rarbrr.c ft_rrarrbrrr.c \
	   ft_sasbss.c ft_scan.c ft_sort.c ft_sorted.c ft_split.c ft_switchzero.c utils.c utils2.c)

NAME = push_swap


INC = -I ./

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

${NAME} : ${OBJS}
			gcc ${FLAGS} ${INC} $(OBJS) -o $(NAME)

all : ${NAME}

%.o:%.c
		gcc ${FLAGS} -c $< -o $@

clean :
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re NAME
