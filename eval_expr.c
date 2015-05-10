/*
** eval_expr.c for Eval_expr in /home/barua_a/rendu/Piscine_C_eval_expr
** 
** Made by Amlan Barua
** Login   <barua_a@epitech.net>
** 
** Started on  Mon Oct 27 16:53:02 2014 Amlan Barua
** Last update Tue Oct 28 19:25:37 2014 Amlan Barua
*/

int	eval_expr(int ac, char **av)
{
  int	i;
  char *str = av[1];
  
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
