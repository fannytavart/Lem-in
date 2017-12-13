#include <stdlib.h>
#include "tools_strings.h"

int	str_in_tab(char **tab, int n, char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (-1);
  if (n == 0)
    {
      while (tab[i] != NULL)
	{
	  if (my_strcmp_bool(tab[i], str))
	    return (i);
	  ++i;
	}
      return (-1);
    }
  while (i < n)
    {
      if (my_strcmp_bool(tab[i], str))
	return (i);
      ++i;
    }
  return (-1);
}
