#include "tools_chars.h"
#include "tools_strings.h"

char	alternate_int(char *str, char sep, int nbr_int_expected)
{
  if (!valid_string(str, "0123456789") || !valid_string(str, &sep))
    return (0);
  if (!check_borders_str_disallowed(str, sep))
    return (0);
  if (char_following_himself(str, sep))
    return (0);
  if (!test_occurence_char(str, (nbr_int_expected - 1), sep))
    return (0);
  return (1);
}
