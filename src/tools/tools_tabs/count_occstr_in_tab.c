/*
** count_occstr_in_tab.c for count_occstr_in_tab in /home/oscar/CPE_2015_Lemin/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 21:30:21 2016 Oscar Stefanini
** Last update Mon Apr 11 21:43:47 2016 Oscar Stefanini
*/

#include "tools_strings.h"
#include "tools_tabs.h"

int	count_occstr_in_tab(char **tab, int n, char *str)
{
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      if (my_strcmp_bool(tab[i], str))
	++ret;
      ++i;
    }
  return (ret);
}
