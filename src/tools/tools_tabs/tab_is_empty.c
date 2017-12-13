#include <stdlib.h>
#include "tools_strings.h"

char	tab_is_empty(char **tab, int size)
{
  int	i;

  i = 0;
  if (size == 0)
    {
      while (tab[i] != NULL)
	{
	  if (str_is_empty(tab[i]) == 0)
	    return (0);
	  ++i;
	}
      return (1);
    }
  while (i < size)
    {
      if (str_is_empty(tab[i]) == 0)
	return (0);
      ++i;
    }
  return (1);
}
