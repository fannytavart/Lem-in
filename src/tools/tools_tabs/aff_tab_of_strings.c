#include <unistd.h>
#include "tools_strings.h"
#include "tools_tabs.h"

void	aff_tab_of_strings(char **tab, int n, int fd)
{
  int	i;

  i = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      write(fd, tab[i], my_strlen_u(tab[i]));
      write(1, "\n", 1);
      ++i;
    }
}
