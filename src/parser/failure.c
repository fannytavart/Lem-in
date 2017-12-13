#include <stdlib.h>

char		**parsing_failure(char **input, int line)
{
  input[line] = NULL;
  return (input);
}
