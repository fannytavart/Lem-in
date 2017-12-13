/*
** str_in_list.c for str_in_list in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:31:55 2016 Oscar Stefanini
** Last update Tue Apr 19 22:41:38 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools_strings.h"

int	str_in_list(char type, char *str, char **list, int limit)
{
  int	i;

  i = 0;
  while (list[i] != NULL)
    {
      if (type == 0)
	{
	  if (my_strcmp_bool(list[i], str))
	    return (i);
	}
      else
	{
	  if (my_strncmp_bool(list[i], str, limit))
	    return (i);
	}
      ++i;
    }
  return (-1);
}
