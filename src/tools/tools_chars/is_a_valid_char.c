char	is_a_valid_char(char test, char *valid_chars)
{
  int	i;

  i = 0;
  while (valid_chars[i] != '\0')
    {
      if (valid_chars[i] == test)
	return (1);
      ++i;
    }
  return (0);
}
