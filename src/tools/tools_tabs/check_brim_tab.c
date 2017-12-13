#include <stdlib.h>
#include "tools_strings.h"

char	check_brim_tab(char **tab, char *valid_str)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    ++i;
  if (i == 0)
    return (0);
  if (my_strcmp_bool(tab[0], valid_str) ||
      (my_strcmp_bool(tab[(i - 1)], valid_str)))
    return (1);
  return (0);
}

char	check_brim_tab_cmp_tab(char **tab, char **valids_str, int n)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    ++i;
  if (i == 0)
    return (0);
  i = 0;
  if (n != 0)
    {
      while (i < n)
	{
	  if (check_brim_tab(tab, valids_str[i++]))
	    return (1);
	}
      return (0);
    }
  while (valids_str[i] != NULL)
    {
      if (check_brim_tab(tab, valids_str[i++]))
	return (1);
    }
  return (0);
}
