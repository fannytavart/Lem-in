#include "tools_strings.h"

char	char_separate_two_strings(char *str, char sep)
{
  int	i;

  i = 0;
  if (sep == '\0')
    return (0);
  if (my_strlen(str) < 3)
    return (0);
  while (str[i]!= '\0')
    {
      if (str[i] == sep && i > 0 && str[i + 1] != '\0')
	return (1);
      ++i;
    }
  return (0);
}
