/*
** my_putstr_printable.c for my_putstr_printable in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:48:27 2016 Oscar Stefanini
** Last update Tue Mar 29 18:48:49 2016 Oscar Stefanini
*/

#include <unistd.h>

void	my_putstr_printable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 27)
	write(1, "^E", 2);
      else if (str[i] == ' ')
	write(1, "(space)", 7);
      else if (str[i] == '\t')
	write(1, "(tab)", 5);
      else
	write(1, &str[i], 1);
      ++i;
    }
}
