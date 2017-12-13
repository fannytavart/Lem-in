/*
** delete_element_in_tab.c for delete_element_in_tab in /home/oscar/tools_fumee_et_alcool/tools/tools_tabs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Fri Apr  8 13:49:50 2016 Oscar Stefanini
** Last update Mon Apr 11 16:45:38 2016 Oscar Stefanini
*/

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
