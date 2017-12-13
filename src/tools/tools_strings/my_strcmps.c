#include <stdlib.h>
#include "tools.h"

int		my_strcmp(const char *str1, const char *str2)
{
  t_uint	idx;

  if (str1 == NULL || str2 == NULL)
    return (-1);
  idx = 0;
  while (str1[idx] != '\0' && str2[idx] != '\0')
    {
      if (str1[idx] != str2[idx])
	return (str1[idx] - str2[idx]);
      idx += 1;
    }
  return (0);
}

int		my_strncmp(const char *str1, const char *str2, t_uint nbr)
{
  t_uint	idx;

  if (str1 == NULL || str2 == NULL)
    return (-1);
  idx = 0;
  while (str1[idx] && str2[idx] && idx < nbr)
    {
      if (str1[idx] != str2[idx])
	return (str1[idx] - str2[idx]);
      idx += 1;
    }
  if (idx < nbr)
    return (-1);
  return (0);
}

char	my_strncmp_bool(char *model, char *test, int pos)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while ((test[i] != '\0') && (model[i] != '\0') && (i < pos))
    {
      if (test[i] == model[i])
	++n;
      ++i;
    }
  if ((model[i] == '\0') && (n == pos))
    return (1);
  return (0);
}

char	my_strcmp_bool(char *model, char *test)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while ((test[i] != '\0') && (model[i] != '\0'))
    {
      if (test[i] == model[i])
	++n;
      ++i;
    }
  if ((model[i] == '\0') && (n == i) && (test[i] == '\0'))
    return (1);
  return (0);
}
