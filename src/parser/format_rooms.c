/*
** format_rooms.c for format_rooms in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Apr 12 16:57:46 2016 Oscar Stefanini
** Last update Wed Apr 20 15:40:30 2016 Ronan Boiteau
*/

#include "tools_strings.h"

int	format_rooms(char *str)
{
  char	*tab_bad[3];

  tab_bad[0] = "#\n\t-";
  tab_bad[1] = "";
  tab_bad[2] = "";
  if (!format_subs_str(str, 3, "044", tab_bad))
    return (0);
  return (1);
}
