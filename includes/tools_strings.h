/*
** tools_strings.h for tools_strings in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 15:32:55 2016 Oscar Stefanini
** Last update Mon Apr 25 21:31:24 2016 Ronan Boiteau
*/

#ifndef TOOLS_STRINGS_H_
# define TOOLS_STRINGS_H_

# include "tools.h"

char	*epurstr(char *str);
t_uint	my_strlen_u(char *str);
int	my_cmp(const char *str1, const char *str2);
void	init_i_and_j(int *i, int *j);
int	my_strcmp(const char *str1, const char *str2);
int	my_strncmp(const char *str1, const char *str2, t_uint nbr);
int	my_strlen(char *str);
char	str_is_empty(char *str);
char	valid_str_regex(char *str, int regex, int n);
char	my_strcmp_bool(char *model, char *test);
char	my_strncmp_bool(char *model, char *test, int pos);
char	valid_string(char *str, char *valid_chars);
char	check_borders_str_disallowed(char *str, char disallowed);
char	char_following_himself(char *str, char test);
char	format_subs_str(char *str, int nbr_subs_str, char *format, char **bad);
char	*fill_my_str(char *str, char c);
char	*fill_my_n_str(char *str, char c, int n);

#endif /* !TOOLS_STRINGS_H_ */
