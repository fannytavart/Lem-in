#ifndef FOURMIZ_H_
# define FOURMIZ_H_

# include "tools.h"

# define ROOM virus[dim].pos
# define VIRUS virus[dim]

typedef struct	s_dijkstra
{
  int		weight;
  int		id_from;
  char		crossed;
}		t_dijkstra;

typedef struct	s_room
{
  char		source;
  t_uint	x;
  t_uint	y;
  char		used;
  int		nb_links;
  int		id_room;
  int		*i;
  char		*name;
  struct s_room	**nexts;
  struct s_room	*next;
  char		occupied;
  t_dijkstra	*dijkstra;
}			t_room;

typedef struct		s_saved
{
  t_room		*room_saved;
  struct s_saved	*prev;
  struct s_saved	*next;
}			t_saved;

typedef struct	s_link
{
  int		id_room_src;
  int		id_room_dest;
  char		*room_src;
  char		*room_dest;
  char		unique;
  struct s_link	*next;
}		t_link;

typedef struct	s_way
{
  char		first_empty;
  int		size;
  t_room	**directions;
}		t_way;

typedef struct	s_ant
{
  int		id;
  t_way		*way;
  t_room	*room;
}		t_ant;

typedef struct	s_virus
{
  char		solution;
  int		nb_save;
  t_saved	*last_save;
  t_saved	*save;
  t_room	*pos;
  t_room	*init;
}		t_virus;

t_room	*next_shortest_room(t_room **rooms, t_room *end);
t_room	**add_direction(t_room **old_directions, int i, t_room *new_dir);
int	count_nb_virus(t_room *start);
void	debug_viru(t_virus *virus, int dim);
void	debug_room_dijkstra(t_room **rooms);
void	fill_all_dijkstra(t_room **rooms, t_room *pos);
t_way	**add_new_way(t_way **old_ways, t_way *new_way);
char	algo(t_room **rooms, int nbr_ant, t_room **borders);
char	infection(t_room **rooms,
		  t_virus **virus,
		  int nb_virus,
		  t_room **borders);
t_way	*dj_kstralize(t_room **rooms,
		      t_room **borders,
		      t_virus *virus,
		      int nb_virus);
void	initialize_dijkstra(t_room **rooms,
			    t_virus *virus,
			    int dim,
			    t_room **borders);
char	manage_virus(t_room **borders,
		     t_room **rooms,
		     t_virus **virus,
		     int *nb_virus);
t_way	**manage_new_way(t_room **borders,
			 t_room **save,
			 t_way *new_way,
			 t_way **ways);
t_way	*initialize_way_ret();
t_way	*do_dijkstra(t_room **rooms, t_room **borders, t_room *init);
void	cpy_virus(t_virus *new_tab, int i, t_virus *old_tab, int dim);
int	count_good_virus(t_virus *virus, int nb_virus);
t_virus	*epur_virus(t_virus *virus, int *nb_virus, char *status);
char	no_solution(t_virus *virus, int nb_virus);
char	correct_number_of_cmd(char **file);
void	find_pos_virus(t_room **start, t_room **end);
char	all_nexts_are_contaminated(t_virus *virus, int dim);
char	disconnect_rooms(t_room *src, t_room *dest);
void	debug_room(t_room *room);
void	debug_all_rooms(t_room **rooms);
char	already_contaminated(t_virus *virus,
			     int dim,
			     t_room *test,
			     char mod);
char	add_historic_contamination(t_virus *virus, int dim, t_room *new);
t_room	*next_contamination(t_virus *virus,
			    int dim,
			    t_room *end,
			    t_room *start);
char	contamination(t_virus *virus, int nb_virus, t_room *end, t_room *start);
t_room	*rollback_contamination(t_virus *virus, int dim);
char	everything_is_infected(t_virus *virus, int nb_virus);
void	debug_all_rooms(t_room **rooms);
void	debug_virus(t_virus *virus, int nb_virus);
char	initialize_virus(t_virus *virus, int nb_virus, t_room *start);
char	initialize_infection_of_rooms(t_room **rooms, int nb_virus);
char	algo_oscar(int nbr_ant, t_room *start, t_room *end);
void	add_save(t_saved **save, t_room *data);
t_room	*previously(t_saved **save);
char	is_a_save(t_room *test, t_saved **save);
char	fill_list_for_oscar_genius(t_link **links, t_room **rooms);
t_room	**create_array_of_rooms(int nbr_rooms, t_room **rooms);
int	count_dest_links(t_link **links, int n);
int	count_src_links(t_link **links, int n);
int	how_many_rooms(t_room **rooms);
int	find_pos_room(char *name_room, t_room **rooms);
char	graph_creator(t_link **links, t_room **rooms);
t_room	*find_this_id_room(t_room **rooms, int id);
char	initialize_infection(t_room **rooms,
			     t_virus *tab_virus,
			     t_room *start,
			     int nb_virus);
t_way	**direct_connect(t_room **borders, char *finish);
void	block_this_way(t_room **rooms, t_room **save);
void	debug_way(t_way *way);
void	rotate_directions(t_way *way);
void	shift_directions(t_way *way, t_room *end);

#endif /* !FOURMIZ_H_ */
