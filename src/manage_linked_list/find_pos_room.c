#include <stdlib.h>
#include "tools_strings.h"
#include "fourmiz.h"

int		find_pos_room(char *name_room, t_room **rooms)
{
  t_room	*tmp;
  int		i;

  tmp = *rooms;
  i = 0;
  while (tmp != NULL && !my_strcmp_bool(name_room, tmp->name))
    {
      tmp = tmp->next;
      ++i;
    }
  return (i);
}
