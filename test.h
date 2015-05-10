/*
** test.h for test.h in /home/barua_a/rendu/Bistro
** 
** Made by Amlan Barua
** Login   <barua_a@epitech.net>
** 
** Started on  Wed Oct 29 13:18:14 2014 Amlan Barua
** Last update Wed Oct 29 15:43:25 2014 Amlan Barua
*/

#ifndef _TEST_H_
# define _TEST_T_

typedef struct s_number
{
  char	*str;
  int	lenght;
  int	offset;

} t_number;

typedef struct s_addition
{
  t_number n1;
  t_number n2;
  t_number result;
} t_addition;

# define MAX(a, b) ((a > b) ? (a) : (b))
# define CHAR_TO_INT (c) ((c) - '0')
# define INT_TO_CHAR (o) ((o) + '0') 

#endif /* _TEST_H_ */
