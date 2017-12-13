/*
** test_occurence_char.c for test_occurence_char in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 17:24:02 2016 Oscar Stefanini
** Last update Mon Apr 11 23:21:18 2016 Oscar Stefanini
*/

char	test_occurence_char(char *str, int nbr_oc_expected, char c)
{
  int	i;
  int	nbr_occurence;

  nbr_occurence = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	++nbr_occurence;
      ++i;
    }
  if (nbr_occurence == nbr_oc_expected)
    return (1);
  return (0);
}
