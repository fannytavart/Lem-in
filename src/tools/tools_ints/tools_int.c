/*
** tools_int.c for tools_int in /home/oscar/PSU_2015_tetris/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Feb 22 18:41:04 2016 Oscar Stefanini
** Last update Sat Apr 16 20:09:43 2016 Oscar Stefanini
*/

int	*fill_every_int(int *tab, int value, int limit)
{
  int	i;

  i = 0;
  while (i < limit)
    {
      tab[i] = value;
      ++i;
    }
  return (tab);
}
