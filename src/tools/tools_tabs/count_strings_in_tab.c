#include <stdlib.h>

int	count_strings_in_tab(char **tab)
{
  int	ret;

  ret = 0;
  while (tab[ret] != NULL)
    ++ret;
  return (ret);
}
