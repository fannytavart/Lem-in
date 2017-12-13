/*
** char_expected_is_here.c for char_expected_is_here in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 17:53:37 2016 Oscar Stefanini
** Last update Tue Mar 29 17:55:24 2016 Oscar Stefanini
*/

char	char_expected_is_here(char *str, char expected, int pos)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && i < pos)
    {
      if (i == pos)
	{
	  if (str[i] == expected)
	    return (1);
	  else
	    return (0);
	}
      if (str[i + 1] == '\0')
	return (0);
      ++i;
    }
  if (str[i] == expected)
    return (1);
  return (0);
}
