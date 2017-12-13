#include <stdlib.h>
#include "tools.h"
#include "tools_tabs.h"

char	**delete_element_in_tab(char **tab, int n, int element)
{
  char	**ret;
  int	i;
  int	k;

  if ((ret = malloc(sizeof(char *) * (count_strings_in_tab(tab)))) == NULL)
    return (NULL);
  i = 0;
  k = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      if (i != element)
	{
	  if ((ret[k++] = my_strdup(tab[i])) == NULL)
	    return (NULL);
	}
      free(tab[i]);
      ++i;
    }
  if (n == 0)
    ret[k] = NULL;
  free(tab);
  return (ret);
}
