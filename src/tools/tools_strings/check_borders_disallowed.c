char	check_borders_str_disallowed(char *str, char disallowed)
{
  int	i;

  i = 0;
  if (str[0] == disallowed)
    return (0);
  while (str[i] != '\0')
    ++i;
  if (i > 0)
    --i;
  if (str[i] == disallowed)
    return (0);
  return (1);
}
