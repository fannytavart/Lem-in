#include <stdlib.h>
#include "tools.h"
#include "tools_tabs.h"

char	lines_str_not_sep(char **tab, char **seps, int *idx, char ***ret)
{
  if (str_in_tab(seps, idx[5], tab[idx[0]]) == -1)
    {
      idx[1] = 0;
      while (!bool_tab((void **)tab, idx[4], idx[0]) &&
	     str_in_tab(seps, idx[5], tab[idx[0]]) == -1)
	{
	  idx[0] += 1;
	  idx[1] += 1;
	}
      if ((ret[idx[3]] = my_tab_cpy_pos(tab, idx[4],
				    (idx[0] - idx[1]), idx[0])) == NULL)
	return (0);
      idx[3] += 1;
    }
  return (1);
}

char	lines_str_is_a_sep(char **tab, char **seps, int *idx, char ***ret)
{
  if (!bool_tab((void **)tab, idx[4], idx[0]) &&
      str_in_tab(seps,idx[5], tab[idx[0]]) != -1)
    {
      if ((ret[idx[3]] = my_tab_cpy_pos(tab,
					idx[4], idx[0], (idx[0] + 1))) == NULL)
	return (0);
      idx[3] += 1;
    }
  return (1);
}

char	***split_two_to_three_seps(char **tab, int n, char **seps, int j)
{
  int	idx[6];
  char	***ret;

  idx[0] = 0;
  idx[2] = count_strings_in_tab_seps(tab, n, seps, j);
  idx[3] = 0;
  idx[4] = n;
  idx[5] = j;
  if ((ret = malloc(sizeof(char **) * (idx[2] + 1))) == NULL)
    return (NULL);
  ret[idx[2]] = NULL;
  while (!(bool_tab((void **)tab, n, idx[0])))
    {
      if (!lines_str_not_sep(tab, seps, idx, ret))
	return (NULL);
      if (!lines_str_is_a_sep(tab, seps, idx, ret))
	return (NULL);
      if (!bool_tab((void **)tab, idx[4], idx[0]))
	idx[0] += 1;
    }
  return (ret);
}
