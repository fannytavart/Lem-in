#include <stdlib.h>
#include <unistd.h>
#include "fourmiz.h"
#include "solve.h"
#include "tools.h"
#include "tools_strings.h"

char	release_ants(t_way **ways, int nbr_ant, t_room **borders, char direct)
{
  t_ant	**ants;

  if (ways == NULL)
    return (0);
  if (ways[0] == NULL)
    return (0);
  set_rooms_unoccupied(ways);
  if ((ants = init_ants(nbr_ant, borders[0], NULL)) == NULL)
    return (0);
  sort_ways(ways);
  while (!anthill_done(ants))
    try_solve_anthill(ways, ants, &nbr_ant, direct);
  free_ants(ants);
  if (direct)
    write(1, "\n", 1);
  return (1);
}

void	try_solve_anthill(t_way **ways, t_ant **ants, int *nbr_ant, char direct)
{
  int	idx;
  int	statique;
  char	space;

  idx = -1;
  space = 0;
  statique = get_last_index(ways);
  while (ants[++idx] != NULL)
    {
      if (ants[idx]->way == NULL)
	{
	  if ((ants[idx]->way = get_next_way(ways, *nbr_ant, &statique)))
	    {
	      *nbr_ant -= 1;
	      try_move_ant(ants[idx], &space);
	    }
	}
      else
	try_move_ant(ants[idx], &space);
    if (direct == 1)
	space = 1;
    }
  statique = get_last_index(ways);
  if (direct != 1)
    write(1, "\n", 1);
}

int	try_move_ant(t_ant *ant, char *space)
{
  if (ant->room != NULL)
    {
      ant->room->occupied = 0;
      if ((ant->room = get_next_room(ant->way->directions, ant->room)) != NULL)
	{
	  if (*space != 0)
	    write(1, " ", 1);
	  write(1, "P", 1);
	  my_putnbr(ant->id);
	  write(1, "-", 1);
	  write(1, ant->room->name, my_strlen(ant->room->name));
	  ant->room->occupied = 1;
	  if (get_next_room(ant->way->directions, ant->room) == NULL)
	    {
	      ant->room->occupied = 0;
	      ant->room = NULL;
	    }
	  *space += 1;
	}
    }
  return (0);
}

void	free_ants(t_ant **ants)
{
  int	idx;

  idx = 0;
  while (ants[idx])
    {
      free(ants[idx]);
      ++idx;
    }
  free(ants);
}
