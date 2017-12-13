#include <stdlib.h>

char	bool_tab(void **tab, int n, int tst)
{
  if (n == 0)
    {
      if (tab[tst] == NULL)
	return (1);
      return (0);
    }
  if (n == tst)
    return (1);
  return (0);
}
