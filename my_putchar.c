/*
** my_putchar.c for my_putchar in /home/barua_a/rendu/Eval_expr
** 
** Made by Amlan Barua
** Login   <barua_a@epitech.net>
** 
** Started on  Tue Oct 28 16:15:33 2014 Amlan Barua
** Last update Tue Oct 28 16:21:22 2014 Amlan Barua
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
