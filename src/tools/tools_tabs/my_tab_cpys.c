#include <unistd.h>
#include <stdlib.h>
#include "tools.h"
#include "tools_tabs.h"

char	**my_tab_cpy_pos(char **tab_src, int n, int start, int end)
{
  int	i;
  int	len;
  int	j;
  char	**ret;

  i = 0;
  j = 0;
  while (!bool_tab((void **)tab_src, n, i) && i < start)
    ++i;
  if (start >= end)
    return (NULL);
  len = end - start;
  if ((ret = malloc(sizeof(char *) * (len + 1))) == NULL)
    return (NULL);
  while (!bool_tab((void **)tab_src, n, start) && start < end)
    {
      if ((ret[j++] = my_strdup(tab_src[start])) == NULL)
	return (NULL);
      ++start;
    }
  ret[len] = NULL;
  return (ret);
}

char	**my_tab_cpy(char **base, int n)
{
  int	idx[2];
  char	**ret;

  idx[0] = 0;
  idx[1] = 0;
  if (base == NULL)
    return (NULL);
  while (!bool_tab((void **)base, n, idx[0]))
    idx[0] += 1;
  if (idx[0] == 0)
    return (NULL);
  if ((ret = malloc(sizeof(char *) * (idx[0] + 1))) == NULL)
    return (NULL);
  ret[idx[0]] = NULL;
  while (idx[1] < idx[0])
    {
      if ((ret[idx[1]] = my_strdup(base[idx[1]])) == NULL)
	return (NULL);
      idx[1] += 1;
    }
  return (ret);
}
