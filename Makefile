NAME		= lem_in

CC		= gcc
CFLAGS		+= -I includes/
CFLAGS		+= -Wall -Wextra
CFLAGS		+= -Werror

RM		= rm -f

SDIR		= src/
TOOLS_TAB	= $(SDIR)tools/tools_tabs/
TOOLS_STR	= $(SDIR)tools/tools_strings/
TOOLS_INT	= $(SDIR)tools/tools_ints/
TOOLS_UINT	= $(SDIR)tools/tools_unsigned_ints/
TOOLS_FILES	= $(SDIR)tools/tools_files/
TOOLS_CHAR	= $(SDIR)tools/tools_chars/
TOOLS_WDTB	= $(SDIR)tools/str_to_wordtab/
TOOLS_RETURN	= $(SDIR)tools/tools_returns/
PARSER		= $(SDIR)parser/
GRAPHER		= $(SDIR)grapher/
SOLVER		= $(SDIR)solver/
LISTS		= $(SDIR)manage_linked_list/

SRCS		= $(SDIR)get_next_line.c					\
		  $(SDIR)manage_virus.c						\
		  $(SDIR)manage_new_way.c					\
		  $(SDIR)main.c							\
		  $(PARSER)parser.c						\
		  $(PARSER)chk_map.c						\
		  $(PARSER)print_map.c						\
		  $(PARSER)room_functions.c					\
		  $(PARSER)get_ants.c						\
		  $(PARSER)link_functions.c					\
		  $(PARSER)add_start_end.c					\
		  $(PARSER)epurstr.c						\
		  $(PARSER)failure.c						\
		  $(GRAPHER)graph_creator.c					\
		  $(GRAPHER)cpy_virus.c						\
		  $(GRAPHER)count_nb_virus.c					\
		  $(GRAPHER)infection/infection.c				\
		  $(GRAPHER)find_this_id_room.c					\
		  $(GRAPHER)count_good_virus.c					\
		  $(GRAPHER)shift_directions.c					\
		  $(GRAPHER)direct_connect.c					\
		  $(GRAPHER)next_shortest_room.c				\
		  $(GRAPHER)add_new_direction.c					\
		  $(GRAPHER)epur_virus.c					\
		  $(GRAPHER)add_new_way.c					\
		  $(GRAPHER)algo_oscar_bis/algo_bis.c				\
		  $(GRAPHER)dj_kstralize.c					\
		  $(GRAPHER)fill_all_dijkstra.c					\
		  $(GRAPHER)initialize_dijkstra.c				\
		  $(GRAPHER)do_dijkstra.c					\
		  $(GRAPHER)find_pos_virus.c					\
		  $(GRAPHER)infection/initialize_infection.c			\
		  $(GRAPHER)no_solution.c					\
		  $(GRAPHER)contamination/next_contamination.c			\
		  $(GRAPHER)contamination/rollback_contamination.c		\
		  $(GRAPHER)contamination/all_nexts_are_contaminated.c		\
		  $(GRAPHER)contamination/already_contaminated.c		\
		  $(GRAPHER)contamination/add_historic_contamination.c		\
		  $(GRAPHER)contamination/contamination.c			\
		  $(GRAPHER)infection/initialize_infection_of_rooms.c		\
		  $(GRAPHER)infection/initialize_virus.c			\
		  $(GRAPHER)infection/everything_is_infected.c			\
		  $(GRAPHER)count_src_links.c					\
		  $(GRAPHER)create_array_of_rooms.c				\
		  $(GRAPHER)block_this_way.c					\
		  $(GRAPHER)rotate_directions.c					\
		  $(GRAPHER)count_dest_links.c					\
		  $(PARSER)format_rooms.c					\
		  $(SOLVER)init_ants.c						\
		  $(SOLVER)release_ants.c					\
		  $(SOLVER)rooms.c						\
		  $(SOLVER)ways.c						\
		  $(SOLVER)ways_sorting.c					\
		  $(PARSER)format_link.c					\
		  $(LISTS)add_room.c						\
		  $(LISTS)how_many_rooms.c					\
		  $(LISTS)find_pos_room.c					\
		  $(LISTS)add_link.c						\
		  $(TOOLS_RETURN)returns_err_char.c				\
		  $(TOOLS_WDTB)my_str_to_wordtab.c				\
		  $(TOOLS_WDTB)my_str_n_to_wordtab.c				\
		  $(TOOLS_WDTB)my_str_to_wordtab_op.c				\
		  $(TOOLS_CHAR)pos_of_the_n_char.c				\
		  $(TOOLS_CHAR)how_many_of_this_char.c				\
		  $(TOOLS_CHAR)is_a_valid_char_regex.c				\
		  $(TOOLS_CHAR)char_expected_is_here.c				\
		  $(TOOLS_CHAR)char_separate_two_strings.c			\
		  $(TOOLS_CHAR)is_a_valid_char.c				\
		  $(TOOLS_CHAR)test_occurence_char.c				\
		  $(TOOLS_CHAR)last_char_is.c					\
		  $(TOOLS_FILES)tools_file.c					\
		  $(TOOLS_INT)my_putnbr.c					\
		  $(TOOLS_INT)tools_int.c					\
		  $(TOOLS_INT)my_getnbrs.c					\
		  $(TOOLS_STR)alternate_char_bool.c				\
		  $(TOOLS_STR)alternate_int.c					\
		  $(TOOLS_STR)my_strcmps.c					\
		  $(TOOLS_STR)my_cmp.c						\
		  $(TOOLS_STR)init_i_and_j.c					\
		  $(TOOLS_STR)end_str_bool.c					\
		  $(TOOLS_STR)fill_my_str.c					\
		  $(TOOLS_STR)char_following_himself.c				\
		  $(TOOLS_STR)fill_my_tab.c					\
		  $(TOOLS_STR)full_of_int_bool.c				\
		  $(TOOLS_STR)valid_str_regex.c					\
		  $(TOOLS_STR)is_emptys.c					\
		  $(TOOLS_STR)check_borders_disallowed.c			\
		  $(TOOLS_STR)my_putstr_printable.c				\
		  $(TOOLS_STR)format_subs_str.c					\
		  $(TOOLS_STR)my_put_tabchar.c					\
		  $(TOOLS_STR)my_strcpys.c					\
		  $(TOOLS_STR)my_strdups.c					\
		  $(TOOLS_STR)my_strlen.c					\
		  $(TOOLS_STR)str_in_list.c					\
		  $(TOOLS_STR)str_in_tab.c					\
		  $(TOOLS_STR)valid_str.c					\
		  $(TOOLS_UINT)tools_u.c					\
		  $(TOOLS_TAB)bool_tab.c					\
		  $(TOOLS_TAB)tab_full_of_null.c				\
		  $(TOOLS_TAB)tab_is_empty.c					\
		  $(TOOLS_TAB)count_strings_in_tab.c				\
		  $(TOOLS_TAB)free_tab_strings.c				\
		  $(TOOLS_TAB)count_occstr_in_tab.c				\
		  $(TOOLS_TAB)cmp_between_two_strings.c				\
		  $(TOOLS_TAB)my_swap_from_to.c					\
		  $(TOOLS_TAB)add_str_to_my_tab.c				\
		  $(TOOLS_TAB)buff_my_gnl.c					\
		  $(TOOLS_TAB)delete_element_in_tab.c				\
		  $(TOOLS_TAB)aff_tab_of_strings.c				\
		  $(TOOLS_TAB)split_two_to_three_seps.c				\
		  $(TOOLS_TAB)count_strings_in_tab_seps.c			\
		  $(TOOLS_TAB)my_tab_cpys.c					\
		  $(TOOLS_TAB)check_brim_tab.c

OBJS	= $(SRCS:.c=.o)


all	: $(NAME)

$(NAME)	: $(OBJS)
	  $(CC) -o $(NAME) $(OBJS)

clean	:
	  $(RM) $(OBJS)

fclean	: clean
	  $(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
