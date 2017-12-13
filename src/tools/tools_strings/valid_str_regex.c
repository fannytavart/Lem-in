#include "tools_chars.h"

char	valid_str_regex(char *str, int regex, int n)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && i < n)
    {
      if (!is_a_valid_char_regex(str[i], regex))
	return (0);
      ++i;
    }
  return (1);
}
