/*
** rooms.c for  in /home/badia_r/git_pls/yolo
**
** Made by Raphael Badia
** Login   <badia_r@epitech.net>
**
** Started on  Sun Apr 24 14:45:56 2016 Raphael Badia
** Last update Sun Apr 24 21:10:37 2016 Raphael Badia
*/

#include <stdlib.h>
#include "fourmiz.h"

void	set_rooms_unoccupied(t_way **ways)
{
  int	idx;
  int	idx2;

  idx = 0;
  while (ways[idx] != NULL)
    {
      idx2 = 0;
      while (ways[idx]->directions[idx2] != NULL)
	{
	  ways[idx]->directions[idx2]->occupied = 0;
	  ++idx2;
	}
      ++idx;
    }
}

t_room	*get_next_room(t_room **rooms, t_room *current_room)
{
  int	i;

  i = 0;
  while (rooms[i] != NULL && rooms[i] != current_room)
    ++i;
  if (rooms[i] == NULL)
    return (rooms[0]);
  return (rooms[i + 1]);
}
