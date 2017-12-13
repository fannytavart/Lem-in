#include "tools_strings.h"
#include "tools_tabs.h"

int	count_occstr_in_tab(char **tab, int n, char *str)
{
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      if (my_strcmp_bool(tab[i], str))
	++ret;
      ++i;
    }
  return (ret);
}
