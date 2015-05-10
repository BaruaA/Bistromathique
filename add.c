/*
** add.c for add_test in /home/barua_a/rendu/Bistro
** 
** Made by Amlan Barua
** Login   <barua_a@epitech.net>
** 
** Started on  Wed Oct 29 14:04:03 2014 Amlan Barua
** Last update Thu Oct 30 11:56:42 2014 Amlan Barua
*/

#include <stdio.h>
#include <stdlib.h>
#include "test.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

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



/*
void	complete_result(t_addition *my_add, int *return)
{
  int	somme;
t_nume
}
*/

int	init_my_add(t_addition *my_add, int argc, char **argv) 
{
  my_add-> n1.str = argv[1];
  my_add-> n1.lenght = my_strlen (argv[1]);
  my_add-> n1.offset = my_add-> n1.lenght;
  my_add-> n2.str = argv[1];
  my_add-> n2.lenght = my_strlen (argv[2]);
  my_add-> n2.offset = my_add-> n2.lenght;
  my_add-> result.lenght = MAX(my_add-> n1.lenght, my_add-> n2.lenght) + 1;
  my_add-> result.offset = my_add-> result.lenght;
  my_add-> result.str = (malloc(sizeof(my_add-> result.lenght + 1)));

}

void	complete_result(t_addition *my_add, int *retenue)
{
  while (my_add-> result.offset > 0)
    {
      my_add-> result.str[my_add-> result.offset - 1] = INT_TO_CHAR(*retenue);
      *retenu = 0;
      my_add -> result.offset--;
    }
}

void	complete_number(t_addition *my_add, int *retenu)
{
  int	somme;

  t_number	*remaining;
  remaining = NULL;

  if (my_add->n1.offset>0)
    {
      remaining = &(my_add->n1)
	}    
  else if 
    {   
      remaining = &(my_add-> n2); 
    }
  if (remaining = NULL)
    return (0);
}
  int	main(int argc, char **argv)
  {
  
  if (argc == 3)
    {

      init_my_add(t_addition *my_add, int argc, char **argv);
      
    }
    //  if (init_my_add (&my_add, argv) = 1))
  else
    {
      my_putstr("Error !\n");
      return (1);
    }
}

