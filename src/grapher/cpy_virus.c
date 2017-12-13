/*
** cpy_virus.c for cpy_virus in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 20 18:48:13 2016 Oscar Stefanini
** Last update Sun Apr 24 18:17:44 2016 Ronan Boiteau
*/

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
