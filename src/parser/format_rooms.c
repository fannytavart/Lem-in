#include "tools_strings.h"

int	format_rooms(char *str)
{
  char	*tab_bad[3];

  tab_bad[0] = "#\n\t-";
  tab_bad[1] = "";
  tab_bad[2] = "";
  if (!format_subs_str(str, 3, "044", tab_bad))
    return (0);
  return (1);
}
