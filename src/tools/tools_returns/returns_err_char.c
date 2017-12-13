/*
** returns_err_char.c for returns_err_char in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 15:15:23 2016 Oscar Stefanini
** Last update Tue Apr 12 15:41:52 2016 Oscar Stefanini
*/

#include <unistd.h>
#include "tools_strings.h"

char	return_err_char(char *str, char ret)
{
  write(2, str, my_strlen_u(str));
  return (ret);
}

char	err_mute(char *str, char ret, char mute)
{
  if (mute != 1)
    write(2, str, my_strlen_u(str));
  return (ret);
}
