char	full_of_int(char *str, int nbr_except, char except)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  if ((str[i] != except) || (nbr_except == 0))
	    return (0);
	  else
	    --nbr_except;
	}
      ++i;
    }
  return (1);
}
