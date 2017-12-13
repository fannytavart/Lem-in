#include <stdlib.h>

char	*str_search(char *str, char search)
{
  char	*cpy;

  cpy = str;
  while (*cpy != '\0')
    {
      if (*cpy == search)
	return (cpy);
      (*cpy)++;
    }
  return (str);
}

char	*get_file_ext(char *filename)
{
  char	*dot;

  dot = str_search(filename, '.');
  if (dot == NULL || dot == filename)
    return ("");
  return (dot + 1);
}
