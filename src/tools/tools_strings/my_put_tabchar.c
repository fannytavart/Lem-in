#include <stdlib.h>
#include <unistd.h>
#include "tools.h"

void	my_put_tabint(int *tab, int limit)
{
  int	i;

  i = 0;
  while (i < limit)
    {
      my_putnbr(tab[i]);
      write(1, "\n", 1);
      ++i;
    }
}

void	my_put_tabuint(unsigned int *tab, int limit)
{
  int	i;

  i = 0;
  while (i < limit)
    {
      my_putnbr_u(tab[i]);
      write(1, "\n", 1);
      ++i;
    }
}
