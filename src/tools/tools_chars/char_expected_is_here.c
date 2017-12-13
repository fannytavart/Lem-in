char	char_expected_is_here(char *str, char expected, int pos)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && i < pos)
    {
      if (i == pos)
	{
	  if (str[i] == expected)
	    return (1);
	  else
	    return (0);
	}
      if (str[i + 1] == '\0')
	return (0);
      ++i;
    }
  if (str[i] == expected)
    return (1);
  return (0);
}
