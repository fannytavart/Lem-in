#include <unistd.h>
#include "tools_ints.h"
#include "tools_strings.h"
#include "fourmiz.h"

static int	chk_rooms_links(t_room *rooms, t_link *links)
{
  return (!links || !rooms ? 1 : 0);
}

static int	chk_borders(t_room **borders)
{
  return (!borders[0] || !borders[1] ? 1 : 0);
}

int		chk_map(t_room *rooms,
			t_link *links,
			int nbr_ants,
			t_room **borders)
{
  return ((nbr_ants <= 0 || chk_rooms_links(rooms, links) ||
	   chk_borders(borders) ? 1 : 0));
}
