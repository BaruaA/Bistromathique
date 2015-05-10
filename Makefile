##
## Makefile for eval_expr in /home/barua_a/rendu/Piscine_C_eval_expr
## 
## Made by Amlan Barua
## Login   <barua_a@epitech.net>
## 
## Started on  Mon Oct 27 17:06:43 2014 Amlan Barua
## Last update Tue Oct 28 16:39:45 2014 Amlan Barua
##

CC	= gcc

RM	= rm -f

NAME	= eval_expr

libNAME	= libmy.a

SRCS	= main.c \
	  eval_expr.c \
	  my_putchar.c \
	  my_put_nbr.c \
          my_putstr.c \
          my_strlen.c \
          my_get_nbr.c \

OBJS	= $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJS)	
	ar rc  $(libNAME) $(OBJS)
	ranlib $(libNAME)	
	cp $(libNAME) lib/my
	cp my.h include
	$(CC) -o $(NAME) $(SRCS) 

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
