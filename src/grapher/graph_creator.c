#include <stdlib.h>
#include "fourmiz.h"

t_room		*connect_rooms(t_room *room, t_link **links, t_room **rooms)
{
  t_link	*tmp;
  int		i;

  tmp = *links;
  i = 0;
  while (tmp != NULL)
    {
      if (tmp->unique == 1)
      	{
	  if (tmp->id_room_src == room->id_room)
	    {
	      room->nexts[i] = find_this_id_room(rooms, tmp->id_room_dest);
	      ++i;
	    }
	  if (tmp->id_room_dest == room->id_room)
	    {
	      room->nexts[i] = find_this_id_room(rooms, tmp->id_room_src);
	      ++i;
	    }
	}
      tmp = tmp->next;
    }
  return (room);
}

char		graph_creator(t_link **links, t_room **rooms)
{
  int		i;
  t_room	*tmp_room;

  tmp_room = *rooms;
  i = 0;
  while (tmp_room != NULL)
    {
      tmp_room->nb_links = count_src_links(links, i);
      tmp_room->nb_links += count_dest_links(links, i);
      if ((tmp_room->nexts = malloc(sizeof(t_room *) *
				    (tmp_room->nb_links + 1))) == NULL)
	    return (0);
      tmp_room->nexts[tmp_room->nb_links] = NULL;
      tmp_room = connect_rooms(tmp_room, links, rooms);
      tmp_room->used = 0;
      tmp_room->source = 0;
      tmp_room = tmp_room->next;
      ++i;
    }
  return (1);
}
