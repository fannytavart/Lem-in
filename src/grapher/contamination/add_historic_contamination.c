#include <stdlib.h>
#include "fourmiz.h"

char		add_historic_contamination(t_virus *virus, int dim, t_room *new)
{
  t_saved	*tmp;
  t_saved	*new_elem;

  if ((new_elem = malloc(sizeof(t_saved) * 1)) == NULL)
    return (0);
  new_elem->room_saved = new;
  new_elem->next = NULL;
  new_elem->prev = NULL;
  if (VIRUS.save == NULL)
    {
      VIRUS.last_save = new_elem;
      VIRUS.save = new_elem;
      return (1);
    }
  tmp = VIRUS.save;
  while (tmp->next != NULL)
    tmp = tmp->next;
  new_elem->prev = tmp;
  tmp->next = new_elem;
  virus->last_save = new_elem;
  return (1);
}
