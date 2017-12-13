/*
** how_many_of_this_char.c for how_many_of_this_char in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 17:50:27 2016 Oscar Stefanini
** Last update Thu Mar 31 13:07:00 2016 Oscar Stefanini
*/

int	how_many_of_this_char(char *str, char c)
{
  int	i;
  int	occ;

  occ = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	++occ;
      ++i;
    }
  return (occ);
}

int	how_n_many_of_this_char(char *str, char c, int n)
{
  int	i;
  int	occ;

  occ = 0;
  i = 0;
  while (str[i] != '\0' && i < n)
    {
      if (str[i] == c)
	++occ;
      ++i;
    }
  return (occ);
}
