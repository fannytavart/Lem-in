/*
** char_following_himself.c for char_following_himself in /home/oscar/CPE_2015_Lemin/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 23:14:27 2016 Oscar Stefanini
** Last update Mon Apr 11 23:16:26 2016 Oscar Stefanini
*/

char	char_following_himself(char *str, char test)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == test)
	{
	  if (str[i + 1] == test)
	    return (1);
	}
      ++i;
    }
  return (0);
}
