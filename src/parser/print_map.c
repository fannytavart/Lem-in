#include <unistd.h>
#include "tools_strings.h"

int		print_map(char **input)
{
  int		idx;

  idx = 0;
  while (input[idx] && input[idx][0])
    {
      write(1, input[idx], my_strlen(input[idx]));
      write(1, "\n", 1);
      ++idx;
    }
  return (0);
}
