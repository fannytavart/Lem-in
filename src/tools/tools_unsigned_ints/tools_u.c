#include <unistd.h>
#include "tools.h"

t_uint		my_strlen_u(char *str)
{
  t_uint	i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  return (i);
}

void		my_putnbr_u(t_uint nbr)
{
  t_uint	i;
  char		letter;

  i = 1;
  while ((nbr / i) >= 10)
    i *= 10;
  while (i >= 1)
    {
      letter = (((nbr / i) % 10) + 48);
      write(1, &letter, 1);
      i /= 10;
    }
}

t_uint		my_getnbr_u(char *str, char *status)
{
  t_uint	ret;
  unsigned int	i;

  i = 0;
  if (status != NULL)
    *status = 0;
  ret = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57)
	{
	  *status = -1;
	  return (ret);
	}
      ret = (ret * 10) + (str[i] - 48);
      i += 1;
    }
  return (ret);
}

t_uint		how_many_of_this_char_u(char *str, char c)
{
  t_uint	i;
  t_uint	occ;

  occ = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	++occ;
      ++i;
    }
  return (occ);
}
