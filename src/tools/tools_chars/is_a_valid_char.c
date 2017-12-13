/*
** is_a_valid_char.c for is_a_valid_char in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 16:42:15 2016 Oscar Stefanini
** Last update Thu Mar 31 12:24:13 2016 Oscar Stefanini
*/

char	is_a_valid_char(char test, char *valid_chars)
{
  int	i;

  i = 0;
  while (valid_chars[i] != '\0')
    {
      if (valid_chars[i] == test)
	return (1);
      ++i;
    }
  return (0);
}
