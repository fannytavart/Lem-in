/*
** full_of_int_bool.c for full_of_int_bool in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:47:00 2016 Oscar Stefanini
** Last update Tue Mar 29 18:47:35 2016 Oscar Stefanini
*/

char	full_of_int(char *str, int nbr_except, char except)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  if ((str[i] != except) || (nbr_except == 0))
	    return (0);
	  else
	    --nbr_except;
	}
      ++i;
    }
  return (1);
}
