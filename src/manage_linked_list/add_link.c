#include <stdlib.h>
#include "fourmiz.h"
#include "tools_strings.h"

static int	is_unique(t_link *links, char *src, char *dest)
{
  if (!my_cmp(src, dest))
    return (0);
  while (links)
    {
      if ((!my_cmp(src, links->room_src) && !my_cmp(dest, links->room_dest)) ||
	  (!my_cmp(src, links->room_dest) && !my_cmp(dest, links->room_src)))
	return (0);
      links = links->next;
    }
  return (1);
}

char		add_link(t_link **links,
			 char *src,
			 char *dest,
			 t_room **rooms)
{
  t_link	*new_link;
  t_link	*tmp;

  if ((new_link = malloc(sizeof(t_link) * 1)) == NULL)
    return (0);
  new_link->unique = is_unique(*links, src, dest);
  new_link->room_src = src;
  new_link->room_dest = dest;
  new_link->id_room_src = find_pos_room(src, rooms);
  new_link->id_room_dest = find_pos_room(dest, rooms);
  new_link->next = NULL;
  if (*links == NULL)
    {
      *links = new_link;
      return (1);
    }
  tmp = *links;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new_link;
  return (1);
}
