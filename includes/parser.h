#ifndef PARSER_H_
# define PARSER_H_

char	add_link(t_link **links, char *src, char *dest, t_room **rooms);
char	add_room(t_room **list, char *name, t_uint x, t_uint y);
int	add_start_end(t_room *rooms, t_room **borders, int cell);
int	chk_map(t_room *rooms,
		t_link *links,
		int nbr_ants,
		t_room **borders);
int	format_link(char *link);
int	format_rooms(char *str);
char	**get_ants(int *line, int *nbr_ants, char *link);
char	**parser(t_room **rooms,
		 t_link **links,
		 int *nbr_ants,
		 t_room **borders);
int	print_map(char **input);
int	stock_link_info(t_room *rooms, t_link **links, char *input);
int	stock_room_info(t_room **rooms, char *input);
char	**parsing_failure(char **input, int line);
char	**realloc_input(char **old, int size);

#endif /* !PARSER_H_ */
