#include <stdlib.h>
#include "tools_strings.h"
#include "tools_tabs.h"

char	detect_cmp_between_two_str(char **tab_test, char **strs, int *i, int j)
{
  int	k;

  if (my_strcmp_bool(tab_test[i[0]], strs[i[1]]))
    {
      k = 0;
      if (j != 0)
	{
	  while (k < j)
	    {
	      if (my_strcmp_bool(tab_test[i[0] + 1], strs[k]))
		return (1);
	      ++k;
	    }
	}
      else
	{
	  while (strs[k] != NULL)
	    {
	      if (my_strcmp_bool(tab_test[i[0] + 1], strs[k]))
		return (1);
	      ++k;
	    }
	}
    }
  return (0);
}

char	cbts_null_tab(char **tab, char **valids_str, int j)
{
  int	idx[2];

  idx[0] = 0;
  while (tab[idx[0] + 1] != NULL)
    {
      idx[1] = 0;
      while (!bool_tab((void **)valids_str, j, idx[1]))
	{
	  if (detect_cmp_between_two_str(tab, valids_str, idx, j))
	    return (1);
	  idx[1] += 1;
	}
      idx[0] += 1;
    }
  return (0);
}

char	cbts_no_null_tab(char **tab, int n, char **valids_str, int j)
{
  int	idx[2];

  idx[0] = 0;
  while ((idx[0] + 1) < n)
    {
      idx[1] = 0;
      while (!bool_tab((void **)valids_str, j, idx[1]))
	{
	  if (detect_cmp_between_two_str(tab, valids_str, idx, j))
	    return (1);
	  idx[1] += 1;
	}
      idx[0] += 1;
    }
  return (0);
}

char	cmp_between_two_strings(char **tab, int n, char **valids_str, int j)
{
  if (n == 0)
    return (cbts_null_tab(tab, valids_str, j));
  return (cbts_no_null_tab(tab, n, valids_str, j));
}
