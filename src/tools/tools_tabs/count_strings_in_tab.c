/*
** count_strings_in_tab.c for count_string_in_tab in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 16:42:47 2016 Oscar Stefanini
** Last update Mon Apr 11 16:46:50 2016 Oscar Stefanini
*/

#include <stdlib.h>

int	count_strings_in_tab(char **tab)
{
  int	ret;

  ret = 0;
  while (tab[ret] != NULL)
    ++ret;
  return (ret);
}
