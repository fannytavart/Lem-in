#include <stdlib.h>
#include "tools_strings.h"

char		*my_strdup(char *str)
{
  t_uint	i;
  char		*ret;

  i = 0;
  if ((ret = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      ret[i] = str[i];
      ++i;
    }
  ret[i] = '\0';
  return (ret);
}

char		*my_strdup_s(char *str, int size)
{
  t_uint	i;
  char		*ret;

  i = 0;
  if (my_strlen(str) > size)
    return (NULL);
  if ((ret = malloc(sizeof(char) * size)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      ret[i] = str[i];
      ++i;
    }
  ret[i] = '\0';
  return (ret);
}

char	*my_strdup_and_cat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*ret;

  i = my_strlen(dest);
  j = my_strlen(src);
  if ((ret = malloc(sizeof(char) * (i + j + 1))) == NULL)
    return (NULL);
  i = 0;
  while (dest[i] != '\0')
    {
      ret[i] = dest[i];
      ++i;
    }
  j = 0;
  while (src[j] != '\0')
    {
      ret[i + j] = src[j];
      ++j;
    }
  ret[i + j] = '\0';
  return (ret);
}

char	*my_strndup_pos(char *str, int *pos, int start, int end)
{
  char	*ret;
  int	idx[3];

  if (pos == NULL)
    {
      idx[0] = start;
      idx[1] = end;
    }
  else
    {
      idx[0] = pos[0];
      idx[1] = pos[1];
    }
  if ((ret = malloc(sizeof(char) * ((idx[1] - idx[0]) + 1))) == NULL)
    return (NULL);
  idx[2] = 0;
  while (idx[0] < idx[1])
    {
      ret[(idx[2]++)] = str[(idx[0])];
      idx[0] += 1;
    }
  ret[idx[2]] = '\0';
  return (ret);
}
