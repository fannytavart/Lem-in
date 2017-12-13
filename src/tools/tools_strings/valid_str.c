/*
** valid_str.c for valid_str in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:22:31 2016 Oscar Stefanini
** Last update Mon Apr 11 18:08:23 2016 Oscar Stefanini
*/

#include "tools_chars.h"

char	valid_string(char *str, char *valid_chars)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_a_valid_char(str[i], valid_chars) == 0)
	return (0);
      ++i;
    }
  return (1);
}

char	n_valid_string(char *str, char *valid_chars, int n)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && i < n)
    {
      if (is_a_valid_char(str[i], valid_chars) == 0)
	return (0);
      ++i;
    }
  return (1);

}
