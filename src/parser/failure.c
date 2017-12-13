/*
** failure.c for lemin in /home/boitea_r/c/CPE_2015_Lemin/src
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Apr 24 22:51:52 2016 Ronan Boiteau
** Last update Sun Apr 24 22:52:12 2016 Ronan Boiteau
*/

#include <stdlib.h>

char		**parsing_failure(char **input, int line)
{
  input[line] = NULL;
  return (input);
}
