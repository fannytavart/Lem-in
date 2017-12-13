#include <stdlib.h>

char	tab_full_of_null(char **tab, int n)
{
  int	i;

  if (n == 0)
    {
      if (tab[0] == NULL)
	return (1);
      return (0);
    }
  i = 0;
  while (i < n)
    {
      if (tab[i] != NULL)
	return (0);
      ++i;
    }
  return (1);
}
