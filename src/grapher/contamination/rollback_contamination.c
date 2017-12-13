#include <stdlib.h>
#include "fourmiz.h"

t_room		*rollback_contamination(t_virus *virus, int dim)
{
  t_saved	*tmp;
  t_room	*ret;

  tmp = virus[dim].save;
  if (tmp->next == NULL)
    {
      virus[dim].solution = -1;
      ret = tmp->room_saved;
      free(tmp);
      virus[dim].save = NULL;
      return (ret);
    }
  while (tmp->next->next != NULL)
    tmp = tmp->next;
  ret = tmp->next->room_saved;
  virus[dim].last_save = tmp;
  free(tmp->next);
  tmp->next = NULL;
  return (ret);
}
