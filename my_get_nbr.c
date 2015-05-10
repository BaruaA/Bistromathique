/*
** my_get_nbr.c for bistro in /home/barua_a/barua_a/rendu/Bistro
** 
** Made by Amlan BARUA
** Login   <barua_a@epitech.net>
** 
** Started on  Tue Nov 18 08:52:26 2014 Amlan BARUA
** Last update Tue Nov 18 08:59:39 2014 Amlan BARUA
*/

int my_get_nbr(char *str)
{
  int result;
  int puiss;

  result = 0;
  puiss = 1;
  while(('-' == (*str)) || ((*str) == '+'))
    {
      if (*str == '-')
	puiss = puiss * -1;
      str++;
    }
  while ((*str >= '0') && (*str <= '9'))
    {
      result = (result * 10) + ((*str) - '0');
      str++;
    }
  return (result * puiss);
}
