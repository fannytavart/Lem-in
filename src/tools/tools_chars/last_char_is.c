/*
** last_char_is.c for last_char_is in /home/oscar/PSU_2015_minishell2/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sat Apr  9 13:23:13 2016 Oscar Stefanini
** Last update Sun Apr 24 15:52:33 2016 Oscar Stefanini
*/

char	last_char_is(char *str, int n)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (0);
  if (n == 0)
    {
      while (str[i] != '\0')
	++i;
      return (str[i - 1]);
    }
  while (str[i] != '\0' && i < n)
    ++i;
  return (str[i - 1]);
}
