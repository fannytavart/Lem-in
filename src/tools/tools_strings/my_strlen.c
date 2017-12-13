/*
** my_strlen.c for my_strlen in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 17:56:47 2016 Oscar Stefanini
** Last update Tue Mar 29 17:56:55 2016 Oscar Stefanini
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0 ;
  while (str[i] != '\0')
    ++i;
  return (i);
}
