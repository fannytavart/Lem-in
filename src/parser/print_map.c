/*
** print_map.c for lemin in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Apr 21 12:50:17 2016 Ronan Boiteau
** Last update Sun Apr 24 18:12:38 2016 Ronan Boiteau
*/

#include <unistd.h>
#include "tools_strings.h"

int		print_map(char **input)
{
  int		idx;

  idx = 0;
  while (input[idx] && input[idx][0])
    {
      write(1, input[idx], my_strlen(input[idx]));
      write(1, "\n", 1);
      ++idx;
    }
  return (0);
}
