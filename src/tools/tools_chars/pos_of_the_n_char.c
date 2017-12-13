/*
** pos_of_the_n_char.c for pos_of_the_n_char in /home/oscar/PSU_2015_minishell2
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr  6 22:07:50 2016 Oscar Stefanini
** Last update Wed Apr  6 22:18:02 2016 Oscar Stefanini
*/

int	pos_of_the_n_char(char *str, char searched, int nbr_occ)
{
  int	pos;
  int	tst;

  pos = 0;
  tst = 0;
  while (str[pos] != '\0' && tst < nbr_occ)
    {
      if (str[pos] == searched)
	tst += 1;
      if (tst == nbr_occ)
	return (pos);
      ++pos;
    }
  return (-1);
}
