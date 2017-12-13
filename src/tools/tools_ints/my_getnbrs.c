#include <limits.h>

static int	my_power(const int nbr, int power)
{
  if (power > 0)
    return (nbr * my_power(nbr, power - 1));
  else if (power == 0)
    return (1);
  return (0);
}

static int	_skip_letters(const char *str)
{
  int		idx;

  idx = 0;
  while (str[idx] && str[idx] != '-' && str[idx] != '+' &&
	 (str[idx] < '0' || str[idx] > '9'))
    idx += 1;
  while ((str[idx + 1] && (str[idx + 1] == '-' || str[idx + 1] == '+'))
	 || str[idx] == '+')
    idx += 1;
  return (idx);
}

static int	_set_reverser(const char *str, int *idx)
{
  if (str[*idx] == '-')
    {
      *idx += 1;
      return (-1);
    }
  return (1);
}

int		my_getnbr(char *str)
{
  long long	result;
  int		reverser;
  int		idx;
  int		lenght;

  result = 0;
  idx = _skip_letters(str);
  reverser = _set_reverser(str, &idx);
  lenght = idx;
  while (str[lenght] >= '0' && str[lenght] <= '9')
    lenght += 1;
  while (idx < lenght)
    {
      result = result + (long long)((str[idx] - '0') *
				    my_power(10, lenght - idx - 1));
      if (result < INT_MIN || result - 1 > INT_MAX)
	return (-1);
      idx += 1;
    }
  result *= reverser;
  return ((int)result);
}
