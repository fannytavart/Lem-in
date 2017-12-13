/*
** tools_file.c for  in /home/badia_r/PSU_2015_tetris/srcs
**
** Made by Raphael Badia
** Login   <badia_r@epitech.net>
**
** Started on  Tue Mar  1 21:52:43 2016 Raphael Badia
** Last update Wed Mar  2 15:52:38 2016 Oscar Stefanini
*/

#include <stdlib.h>

char	*str_search(char *str, char search)
{
  char	*cpy;

  cpy = str;
  while (*cpy != '\0')
    {
      if (*cpy == search)
	return (cpy);
      (*cpy)++;
    }
  return (str);
}

char	*get_file_ext(char *filename)
{
  char	*dot;

  dot = str_search(filename, '.');
  if (dot == NULL || dot == filename)
    return ("");
  return (dot + 1);
}
