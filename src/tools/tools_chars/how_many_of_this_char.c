int	how_many_of_this_char(char *str, char c)
{
  int	i;
  int	occ;

  occ = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	++occ;
      ++i;
    }
  return (occ);
}

int	how_n_many_of_this_char(char *str, char c, int n)
{
  int	i;
  int	occ;

  occ = 0;
  i = 0;
  while (str[i] != '\0' && i < n)
    {
      if (str[i] == c)
	++occ;
      ++i;
    }
  return (occ);
}
