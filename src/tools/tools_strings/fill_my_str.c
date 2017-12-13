/*
** fill_my_char.c for fill_my_char in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:21:19 2016 Oscar Stefanini
** Last update Thu Mar 31 13:30:34 2016 Oscar Stefanini
*/

char	*fill_my_str(char *str, char c)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      str[i] = c;
      ++i;
    }
  return (str);
}

char	*fill_my_n_str(char *str, char c, int n)
{
  int	i;

  i = 0;
  while (i < n && str[i] != '\0')
    {
      str[i] = c;
      ++i;
    }
  return (str);
}
