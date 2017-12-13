/*
** alternate_int.c for alternate_int in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:23:43 2016 Oscar Stefanini
** Last update Mon Apr 11 23:29:43 2016 Oscar Stefanini
*/

#include "tools_chars.h"
#include "tools_strings.h"

char	alternate_int(char *str, char sep, int nbr_int_expected)
{
  if (!valid_string(str, "0123456789") || !valid_string(str, &sep))
    return (0);
  if (!check_borders_str_disallowed(str, sep))
    return (0);
  if (char_following_himself(str, sep))
    return (0);
  if (!test_occurence_char(str, (nbr_int_expected - 1), sep))
    return (0);
  return (1);
}
