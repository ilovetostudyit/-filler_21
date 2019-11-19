# include <stdio.h>
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct  s_game_info
{
    int         x;
    int         y;
    char        *line;
    char        *num;
}               t_game_info;

int             ft_player_parse();
void ft_print_result(t_game_info *filler);
# define MAXFILED 50000
# define BUFF_SIZE 50

int		get_next_line(int const fd, char **line);
int     ft_init_struct(t_game_info *filler);
int     double_array_free(char **array);
int     double_array_len(char **array);