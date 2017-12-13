#include <stdlib.h>

void	free_double_array_ch(char **tab, char master, int lim_p, int lim)
{
  int	i;

  i = 0;
  if (lim_p == 1)
    {
      while (i < lim)
	{
	  free(tab[i]);
	  ++i;
	}
      if (master == 1)
	free(tab);
      return ;
    }
  while (tab[i] != NULL)
    {
      free(tab[i]);
      ++i;
    }
  if (master == 1)
    free(tab);
}
