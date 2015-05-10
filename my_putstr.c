/*
** my_putstr.c for my_putstr in /home/barua_a/rendu/Eval_expr
** 
** Made by Amlan Barua
** Login   <barua_a@epitech.net>
** 
** Started on  Tue Oct 28 14:42:48 2014 Amlan Barua
** Last update Tue Oct 28 14:45:27 2014 Amlan Barua
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
