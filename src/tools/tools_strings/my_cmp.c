int		my_cmp(const char *str1, const char *str2)
{
  if (!str1 || !str2)
    return (1);
  else if ((*str1 == '\0') && (*str2 == '\0'))
    return (0);
  else if (*str1 == *str2)
    return (my_cmp(str1 + 1, str2 + 1));
  else
    return (1);
}
