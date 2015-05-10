#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <get_next_line.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str[i] == NULL)
    return 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

char	*get_next_line(const int fd)
{
  static int	i;
  static int	a;
  char	buff [BUFFER_SIZE];
  char	*str;
  static  int	end;
  int	x;
  int	mm;

  x = 0;
  str = NULL;
  mm = read(fd, buff, BUFFER_SIZE);
  

  if (i > end)
    {
      return (NULL);
    }
 
  if (a == 0)
    {
      str = malloc(sizeof(char));
      a++;
      end = mm;
    }
  else
    str = malloc(sizeof(char));

  if (str == NULL)
    {
      return (NULL);
    }

  while (buff[i] != '\n' && i != end)
    {
      str[x] = buff[i];
      i++;
      x++;
     }
  i = i + 1;
  return (str); 
}
