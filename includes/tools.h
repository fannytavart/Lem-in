#ifndef TOOLS_H_
# define TOOLS_H_

typedef	unsigned int	t_uint;
typedef unsigned char	t_uchar;

char	valid_string(char *str, char *valid_chars);
char	n_valid_string(char *str, char *valid_chars, int n);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strcpy_sep(char *dest, char *src, char sep);
char	*my_strdup(char *str);
char	alternate_char_bool(char *str, int i, char sep);
char	alternate_int(char *str, char sep, int nbr_int_expected);
char	test_occurence_char(char *str, int nbr_oc_expected, char c);
int	how_many_of_this_char(char *str, char c);
int	how_n_many_of_this_char(char *str, char c, int n);
char	**fill_every_str(char **tab, char c, t_uint s, t_uint t);
void	free_how_lines_char(char **wordtab, unsigned int *mots);
void	my_putnbr_u(t_uint nbr);
t_uint	my_getnbr_u(char *str, char *status);
t_uint	how_many_of_this_char_u(char *str, char c);
int	*fill_every_int(int *tab, int value, int limit);
char	*my_strdup_and_cat(char *dest, char *src);
int	str_in_tab(char **tab, int n, char *str);
int	str_in_list(char type, char *str, char **list, int limit);
void	my_putnbr(int nbr);
char	*my_strdup_s(char *str, int size);
char	*my_strndup_pos(char *str, int *pos, int start, int end);
char	char_expected_is_here(char *str, char expected, int pos);
char	find_end_str(char *str, char *exp);
int	how_words_op(char *str, char op);
void	fill_this_word_op(char **wordtab, t_uint idx[2], char *str, char op);
char	**my_str_to_wordtab_op(char *str, char op);
char	check_brim_tab_cmp_tab(char **tab, char **valids_str, int n);
char	check_brim_tab(char **tab, char *valid_str);
void	my_put2d(char **tab);
char	full_of_int(char *str, int nbr_except, char except);
void	free_how_lines_char(char **wordtab, unsigned int *mots);
int	how_words(char *str);
void	fill_this_word(char **wordtab, unsigned int *i);
char	**my_str_to_wordtab(char *str);
int	how_many_words_n(char *str, int *pos);
char	**my_str_n_to_wordtab(char *str, int *pos);
char	*my_strndup_pos(char *str, int *pos, int start, int end);
int	count_rows(char **block);
char	**add_str_in_array(char *str, char **block);
char	*str_search(char *str, char search);
char	*get_file_ext(char *filename);

#endif /* !TOOLS_H_ */
