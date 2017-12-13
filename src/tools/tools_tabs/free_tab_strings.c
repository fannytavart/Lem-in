#include <stdlib.h>
#include "tools_tabs.h"

void	free_tab_strings(char **tab, int n, char master)
{
  int	i;

  i = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      free(tab[i]);
      ++i;
    }
  if (master == 1)
    free(tab);
}
