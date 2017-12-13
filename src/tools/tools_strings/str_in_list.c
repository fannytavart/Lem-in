#include <stdlib.h>
#include "tools_strings.h"

int	str_in_list(char type, char *str, char **list, int limit)
{
  int	i;

  i = 0;
  while (list[i] != NULL)
    {
      if (type == 0)
	{
	  if (my_strcmp_bool(list[i], str))
	    return (i);
	}
      else
	{
	  if (my_strncmp_bool(list[i], str, limit))
	    return (i);
	}
      ++i;
    }
  return (-1);
}
