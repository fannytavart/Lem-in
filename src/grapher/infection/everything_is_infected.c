#include "fourmiz.h"

char	everything_is_infected(t_virus *virus, int nb_virus)
{
  int	i;

  i = 0;
  while (i < nb_virus)
    {
      if (virus[i].solution == 0)
	return (0);
      ++i;
    }
  return (1);
}
