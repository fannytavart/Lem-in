int	*fill_every_int(int *tab, int value, int limit)
{
  int	i;

  i = 0;
  while (i < limit)
    {
      tab[i] = value;
      ++i;
    }
  return (tab);
}
