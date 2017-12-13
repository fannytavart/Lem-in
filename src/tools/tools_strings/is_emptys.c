#include "tools_strings.h"

char	str_is_empty(char *str)
{
  int	i;
  int	n;

  n = my_strlen_u(str);
  i = 1;
  while ((i) < (n - 2))
    {
      if (str[i] != ' ' || str[i] != '\t')
	return (0);
      i += 1;
    }
  return (1);
}
