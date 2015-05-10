/*
** test_get_nbr.c for tesègetnbr in /home/chouqu_d/rendu/test_bistro
** 
** Made by gregory chouquet
** Login   <chouqu_d@epitech.net>
** 
** Started on  Mon Oct 27 20:08:38 2014 gregory chouquet
** Last update Tue Oct 28 18:06:59 2014 gregory chouquet
*/

void    my_put_nbr(int nb)
{
  int   neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          neg = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
