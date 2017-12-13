/*
** is_emptys.c for is_emptys in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:15:52 2016 Oscar Stefanini
** Last update Mon Apr 11 15:40:16 2016 Oscar Stefanini
*/

#include "tools_strings.h"

char	str_is_empty(char *str)
{
  int	i;
  int	n;

  n = my_strlen_u(str);
  i = 1;
  while ((i) < (n - 2))
    {
      if (str[i] != ' ' || str[i] != '\t')
	return (0);
      i += 1;
    }
  return (1);
}
