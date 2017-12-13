#include <unistd.h>
#include "tools_strings.h"

char	return_err_char(char *str, char ret)
{
  write(2, str, my_strlen_u(str));
  return (ret);
}

char	err_mute(char *str, char ret, char mute)
{
  if (mute != 1)
    write(2, str, my_strlen_u(str));
  return (ret);
}
