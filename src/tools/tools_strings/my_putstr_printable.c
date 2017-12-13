#include <unistd.h>

void	my_putstr_printable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 27)
	write(1, "^E", 2);
      else if (str[i] == ' ')
	write(1, "(space)", 7);
      else if (str[i] == '\t')
	write(1, "(tab)", 5);
      else
	write(1, &str[i], 1);
      ++i;
    }
}
