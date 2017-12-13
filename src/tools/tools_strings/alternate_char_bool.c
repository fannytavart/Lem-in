char	alternate_char_bool(char *str, int i, char sep)
{
  char	separator_present;

  separator_present = 0;
  while (str[i] != '\0')
    {
      if (separator_present == 0)
	{
	  if (str[i] == sep)
	    return (0);
	  separator_present = 1;
	}
      else
	{
	  if (separator_present == 1)
	    {
	      if (str[i] != sep)
		return (0);
	      separator_present = 0;
	    }
	}
      ++i;
    }
  return (1);
}
