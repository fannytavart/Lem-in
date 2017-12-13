/*
** my_putnbr.c for my_putnbr in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:33:13 2016 Oscar Stefanini
** Last update Tue Mar 29 18:53:08 2016 Oscar Stefanini
*/

#include <unistd.h>

void	my_putnbr(int nbr)
{
  int	i;
  char	letter;

  i = 1;
  while ((nbr / i) >= 10)
    i *= 10;
  while (i >= 1)
    {
      letter = (((nbr / i) % 10) + 48);
      write(1, &letter, 1);
      i /= 10;
    }
}

char	my_putnbr_fd(int fd, int nbr)
{
  int	i;
  char	letter;

  i = 1;
  while ((nbr / i) >= 10)
    i *= 10;
  while (i >= 1)
    {
      letter = (((nbr / i) % 10) + 48);
      if (write(fd, &letter, 1) == -1)
	return (0);
      i /= 10;
    }
  return (1);
}
