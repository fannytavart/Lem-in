/*
** solve.h for  in /home/badia_r/git_pls/yolo
**
** Made by Raphael Badia
** Login   <badia_r@epitech.net>
**
** Started on  Sun Apr 24 14:51:08 2016 Raphael Badia
** Last update Mon Apr 25 21:30:01 2016 Ronan Boiteau
*/

#ifndef SOLVE_H_
# define SOLVE_H_

t_way	**sort_ways(t_way **ways);
t_way	*get_next_way(t_way **ways, int nbr_ants, int *idx);
t_ant	**init_ants(int nb_ants, t_room *start, t_way *way);
char	release_ants(t_way **ways, int nbr_ant, t_room **borders, char direct);
int	try_move_ant(t_ant *ant, char *space);
void	free_ants(t_ant **ants);
int	anthill_done(t_ant **ants);
void	try_solve_anthill(t_way **ways,
			  t_ant **ants,
			  int *nbr_ant,
			  char direct);
void	set_rooms_unoccupied(t_way **ways);
int	get_last_index(t_way **ways);
t_room	*get_next_room(t_room **rooms, t_room *current_room);

#endif /* !SOLVE_H_ */
