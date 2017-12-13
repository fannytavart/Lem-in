#include <unistd.h>
#include "tools_chars.h"
#include "tools_returns.h"
#include "tools_strings.h"

char	format_link(char *link)
{
  int	i;

  if (!my_strncmp("##", link, 2))
    return (0);
  if (my_strlen(link) < 3)
    return (0);
  i = 0;
  if (*link == '-')
    return (0);
  if (link[my_strlen(link)] == '-')
    return (0);
  while (link[i])
    {
      if (link[i] == '-')
	return (1);
      i = i + 1;
    }
  return (0);
}
