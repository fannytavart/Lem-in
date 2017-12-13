#include <stdlib.h>
#include "tools_tabs.h"
#include "tools.h"

void	my_swap_from_to(char **cmd, int n, int from, int to)
{
  int	i;
  char	*tmp;

  i = 0;
  while (!bool_tab((void **)cmd, n, i))
    {
      if (i == from)
	{
	  tmp = cmd[to];
	  cmd[to] = cmd[from];
	  cmd[from] = tmp;
	  return ;
	}
      ++i;
    }
}

void	my_shift_tab_left(char **tab, int start, int end)
{
  char	*tmp;
  int	max[2];

  max[0] = end;
  max[1] = max[0];
  while ((end - start) >= 0)
    {
      tmp = tab[end];
      while (max[0] > 0)
	{
	  tab[max[0]] = tab[max[0] - 1];
	  max[0] -= 1;
	}
      tab[0] = tmp;
      max[0] = max[1];
      ++start;
    }
}
