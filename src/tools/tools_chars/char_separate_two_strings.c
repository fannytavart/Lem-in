/*
** char_separate_two_strings.c for char_separate_two_strings in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Apr 12 14:59:15 2016 Oscar Stefanini
** Last update Tue Apr 12 15:54:20 2016 Oscar Stefanini
*/

#include "tools_strings.h"

char	char_separate_two_strings(char *str, char sep)
{
  int	i;

  i = 0;
  if (sep == '\0')
    return (0);
  if (my_strlen(str) < 3)
    return (0);
  while (str[i]!= '\0')
    {
      if (str[i] == sep && i > 0 && str[i + 1] != '\0')
	return (1);
      ++i;
    }
  return (0);
}
