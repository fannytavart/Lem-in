#include "fourmiz.h"

void	cpy_virus(t_virus *new_tab, int i, t_virus *old_tab, int dim)
{
  new_tab[i].solution = 1;
  new_tab[i].nb_save = old_tab[dim].nb_save;
  new_tab[i].last_save = old_tab[dim].last_save;
  new_tab[i].init = old_tab[dim].init;
  new_tab[i].save = old_tab[dim].save;
  new_tab[i].pos = old_tab[dim].pos;
}
