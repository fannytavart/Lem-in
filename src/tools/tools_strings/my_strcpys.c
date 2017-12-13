/*
** my_strcpys.c for my_strcpys in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:11:29 2016 Oscar Stefanini
** Last update Sun Apr 24 22:07:55 2016 Fanny Tavart
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while ((i < n) && (src[i] != '\0'))
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strcpy_sep(char *dest, char *src, char sep)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (src[i] != '\0')
    {
      if (src[i] != sep)
	dest[j++] = src[i];
      i += 1;
    }
  dest[j] = '\0';
  return (dest);
}
