int	pos_of_the_n_char(char *str, char searched, int nbr_occ)
{
  int	pos;
  int	tst;

  pos = 0;
  tst = 0;
  while (str[pos] != '\0' && tst < nbr_occ)
    {
      if (str[pos] == searched)
	tst += 1;
      if (tst == nbr_occ)
	return (pos);
      ++pos;
    }
  return (-1);
}
