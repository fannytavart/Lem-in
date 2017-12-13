char	test_occurence_char(char *str, int nbr_oc_expected, char c)
{
  int	i;
  int	nbr_occurence;

  nbr_occurence = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	++nbr_occurence;
      ++i;
    }
  if (nbr_occurence == nbr_oc_expected)
    return (1);
  return (0);
}
