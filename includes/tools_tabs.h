#ifndef TOOLS_TABS_H_
# define TOOLS_TABS_H_

char	bool_tab(void **tab, int n, int tst);
char	cmp_between_two_strings(char **tab, int n, char **valids_str, int j);
int	str_in_tab(char **tab, int n, char *str);
int	count_strings_in_tab_seps(char **tab, int n, char **seps, int j);
char	**add_str_to_my_tab(char **old_tab, int n, char *new_str);
void	free_tab_strings(char **tab, int n, char master);
char	tab_is_empty(char **tab, int size);
char	tab_full_of_null(char **tab, int n);
char	**delete_element_in_tab(char **tab, int n, int element);
void	aff_tab_of_strings(char **tab, int n, int fd);
char	**my_tab_cpy_pos(char **tab_src, int n, int start, int end);
char	**my_tab_cpy(char **base, int n);
int	count_strings_in_tab(char **tab);
char	**buff_my_gnl(int fd);
char	***split_two_to_three_seps(char **tab, int n, char **seps, int j);
void	my_shift_tab_left(char **tab, int start, int end);
int	count_occstr_in_tab(char **tab, int n, char *str);

#endif /* !TOOLS_TABS_H_ */
