#include "tools_strings.h"

char	**fill_my_tab(char **tab, char c, int t)
{
  int	i;

  i = 0;
  while (i < t)
    {
      tab[i] = fill_my_str(tab[i], c);
      ++i;
    }
  return (tab);
}
