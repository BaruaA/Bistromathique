/*
** my_strlen.c for my_strlen in /home/barua_a/rendu/Eval_expr
** 
** Made by Amlan Barua
** Login   <barua_a@epitech.net>
** 
** Started on  Tue Oct 28 14:45:54 2014 Amlan Barua
** Last update Tue Oct 28 14:47:24 2014 Amlan Barua
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
