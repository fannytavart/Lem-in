#ifndef TOOLS_CHARS_H_
# define TOOLS_CHARS_H_

int	pos_of_the_n_char(char *str, char searched, int nbr_occ);
char	last_char_is(char *str, int n);
char	is_a_valid_char(char test, char *valid_chars);
char	is_a_valid_char_regex(char c, int regex);
char	test_occurence_char(char *str, int nbr_oc_expected, char c);
char	char_separate_two_strings(char *str, char sep);

#endif /* !TOOLS_CHARS_H_ */
