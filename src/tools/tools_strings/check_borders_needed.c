/*
** check_borders_str.c for check_borders_str in /home/oscar/CPE_2015_Lemin/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 22:58:43 2016 Oscar Stefanini
** Last update Mon Apr 11 23:07:37 2016 Oscar Stefanini
*/

char	check_borders_str_needed(char *str, char needed)
{
  int	i;

  i = 0;
  if (str[0] != needed)
    return (0);
  while (str[i] != '\0')
    ++i;
  if (i > 0)
    --i;
  if (str[i] != needed)
    return (0);
  return (1);
}
