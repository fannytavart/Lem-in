/*
** check_borders_allowed.c for check_border_disallowed in /home/oscar/CPE_2015_Lemin/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 23:07:56 2016 Oscar Stefanini
** Last update Mon Apr 11 23:08:00 2016 Oscar Stefanini
*/

char	check_borders_str_disallowed(char *str, char disallowed)
{
  int	i;

  i = 0;
  if (str[0] == disallowed)
    return (0);
  while (str[i] != '\0')
    ++i;
  if (i > 0)
    --i;
  if (str[i] == disallowed)
    return (0);
  return (1);
}
