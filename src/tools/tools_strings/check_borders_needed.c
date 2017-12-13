char	check_borders_str_needed(char *str, char needed)
{
  int	i;

  i = 0;
  if (str[0] != needed)
    return (0);
  while (str[i] != '\0')
    ++i;
  if (i > 0)
    --i;
  if (str[i] != needed)
    return (0);
  return (1);
}
