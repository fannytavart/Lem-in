/*
** aff_tab_of_strings.c for aff_tab_of_strings in /home/oscar/PSU_2015_minishell2
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr  7 14:24:59 2016 Oscar Stefanini
** Last update Mon Apr 11 15:46:24 2016 Oscar Stefanini
*/

#include <unistd.h>
#include "tools_strings.h"
#include "tools_tabs.h"

void	aff_tab_of_strings(char **tab, int n, int fd)
{
  int	i;

  i = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      write(fd, tab[i], my_strlen_u(tab[i]));
      write(1, "\n", 1);
      ++i;
    }
}
