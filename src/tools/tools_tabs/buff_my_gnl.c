#include <stdlib.h>
#include "tools_tabs.h"
#include "get_next_line.h"

char	**buff_my_gnl(int fd)
{
  char	**ret;
  char	*tmp;
  char	status;
  int	size;

  status = 1;
  size = 1;
  if ((ret = malloc(sizeof(char *) * 1)) == NULL)
    return (NULL);
  ret[0] = NULL;
  while (status == 1)
    {
      tmp = get_next_line(fd);
      if (tmp != NULL)
	{
	  if ((ret = add_str_to_my_tab(ret, size, tmp)) == NULL)
	    return (NULL);
	}
      else
	status = 0;
      ++size;
    }
  return (ret);
}
