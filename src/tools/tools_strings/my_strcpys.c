char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while ((i < n) && (src[i] != '\0'))
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strcpy_sep(char *dest, char *src, char sep)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (src[i] != '\0')
    {
      if (src[i] != sep)
	dest[j++] = src[i];
      i += 1;
    }
  dest[j] = '\0';
  return (dest);
}
