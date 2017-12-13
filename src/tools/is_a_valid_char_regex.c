char	is_a_valid_char_limit(char c, char *limit)
{
  if (limit[0] >= limit[1])
    return (0);
  if ((limit[0] <= c) && (c <= limit[1]))
    return (1);
  return (0);
}

char	check_all_regex(char c, char **tab_str, char *tab)
{
  int	i[2];

  i[0] = 0;
  i[1] = 0;
  while ((i[0]++) < 3)
    {
      if ((tab[(i[0] - 1)] == 1) &&
	  (((i[1] = is_a_valid_char_limit(c, tab_str[(i[0] - 1)]))) == 1))
	return (1);
    }
  return (0);
}

char	is_a_valid_char_regex(char c, int regex)
{
  char	*tab_str[3];
  char	tab[3];
  int	i[2];

  i[1] = 4;
  i[0] = 0;
  tab[0] = 0;
  tab[1] = 0;
  tab[2] = 0;
  tab_str[0] = "09";
  tab_str[1] = "AZ";
  tab_str[2] = "az";
  while (i[1] > 0)
    {
      if (i[1] <= regex)
	{
	  tab[i[0]] = 1;
	  regex -= i[1];
	}
      i[0] += 1;
      i[1] /= 2;
    }
  return (check_all_regex(c, tab_str, tab));
}
