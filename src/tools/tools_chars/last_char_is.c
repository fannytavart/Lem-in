char	last_char_is(char *str, int n)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (0);
  if (n == 0)
    {
      while (str[i] != '\0')
	++i;
      return (str[i - 1]);
    }
  while (str[i] != '\0' && i < n)
    ++i;
  return (str[i - 1]);
}
