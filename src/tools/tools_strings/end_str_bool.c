/*
** end_str_bool.c for end_str_bool in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:55:47 2016 Oscar Stefanini
** Last update Mon Apr 11 17:37:01 2016 Oscar Stefanini
*/

#include "tools_strings.h"

char	find_end_str(char *str, char *exp)
{
  int	len[2];
  int	i;

  len[0] = my_strlen(str);
  len[1] = my_strlen(exp);
  if (len[1] > len[0])
    return (0);
  if (len[1] == len[0])
    return (my_strcmp_bool(str, exp));
  len[0] -= 1;
  len[1] -= 1;
  i = 0;
  while ((len[0] >= 0 && len[1] >= 0) && (str[(len[0])--] == exp[(len[1])--]))
    ++i;
  if (i == my_strlen(exp) && (len[1] == -1))
    return (1);
  else
    return (0);
}
