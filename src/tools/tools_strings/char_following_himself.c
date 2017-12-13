char	char_following_himself(char *str, char test)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == test)
	{
	  if (str[i + 1] == test)
	    return (1);
	}
      ++i;
    }
  return (0);
}
