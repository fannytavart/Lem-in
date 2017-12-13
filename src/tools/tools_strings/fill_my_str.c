char	*fill_my_str(char *str, char c)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      str[i] = c;
      ++i;
    }
  return (str);
}

char	*fill_my_n_str(char *str, char c, int n)
{
  int	i;

  i = 0;
  while (i < n && str[i] != '\0')
    {
      str[i] = c;
      ++i;
    }
  return (str);
}
