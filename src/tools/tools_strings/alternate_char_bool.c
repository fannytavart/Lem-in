/*
** alternate_char_bool.c for alternate_bool in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:25:49 2016 Oscar Stefanini
** Last update Tue Mar 29 19:54:47 2016 Oscar Stefanini
*/

char	alternate_char_bool(char *str, int i, char sep)
{
  char	separator_present;

  separator_present = 0;
  while (str[i] != '\0')
    {
      if (separator_present == 0)
	{
	  if (str[i] == sep)
	    return (0);
	  separator_present = 1;
	}
      else
	{
	  if (separator_present == 1)
	    {
	      if (str[i] != sep)
		return (0);
	      separator_present = 0;
	    }
	}
      ++i;
    }
  return (1);
}
