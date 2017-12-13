#include <unistd.h>

void	my_putnbr(int nbr)
{
  int	i;
  char	letter;

  i = 1;
  while ((nbr / i) >= 10)
    i *= 10;
  while (i >= 1)
    {
      letter = (((nbr / i) % 10) + 48);
      write(1, &letter, 1);
      i /= 10;
    }
}

char	my_putnbr_fd(int fd, int nbr)
{
  int	i;
  char	letter;

  i = 1;
  while ((nbr / i) >= 10)
    i *= 10;
  while (i >= 1)
    {
      letter = (((nbr / i) % 10) + 48);
      if (write(fd, &letter, 1) == -1)
	return (0);
      i /= 10;
    }
  return (1);
}
