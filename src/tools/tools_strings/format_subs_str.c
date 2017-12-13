#include <stdlib.h>
#include "tools_strings.h"
#include "tools_chars.h"

char	check_min_format_sub_str(char *str, int nbr_subs_str)
{
  if (!check_borders_str_disallowed(str, ' '))
    return (0);
  if (char_following_himself(str, ' '))
    return (0);
  if (!test_occurence_char(str, (nbr_subs_str - 1), ' '))
    return (0);
  return (1);
}

char	check_format_subs_universal(char *str, int *i, char **bad, int j)
{
  while (str[*i] != '\0' && str[*i] != ' ')
    {
      if (is_a_valid_char(str[*i], bad[j]))
	return (0);
      *i += 1;
    }
  return (1);
}

char	check_format_subs_regex(char *str, int *i, char **bad, char *format)
{
  while (str[i[0]] != '\0' && str[i[0]] != ' ')
    {
      if (!is_a_valid_char_regex(str[i[0]], (format[i[1]] - 48)) ||
	  is_a_valid_char(str[i[0]], bad[i[1]]))
	return (0);
      i[0] += 1;
    }
  return (1);
}

char	format_subs_str(char *str, int nbr_subs_str, char *format, char **bad)
{
  int	idx[2];

  idx[0] = 0;
  idx[1] = 0;
  if (!check_min_format_sub_str(str, nbr_subs_str))
    return (0);
  while (str[idx[0]] != '\0')
    {
      if (bad[idx[1]] != NULL && format[idx[1]] == '0')
	{
	  if (!check_format_subs_universal(str, &idx[0], bad, idx[1]))
	    return (0);
	  idx[1] += 1;
	}
      else if (bad[idx[1]] != NULL)
	{
	  if (!check_format_subs_regex(str, idx, bad, format))
	    return (0);
	  idx[1] += 1;
	}
      if (str[idx[0]] != '\0')
	idx[0] += 1;
    }
  return (1);
}
