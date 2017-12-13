/*
** valid_str_regex.c for valid_str_regex in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 17:16:16 2016 Oscar Stefanini
** Last update Mon Apr 11 18:12:20 2016 Oscar Stefanini
*/

#include "tools_chars.h"

char	valid_str_regex(char *str, int regex, int n)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && i < n)
    {
      if (!is_a_valid_char_regex(str[i], regex))
	return (0);
      ++i;
    }
  return (1);
}
