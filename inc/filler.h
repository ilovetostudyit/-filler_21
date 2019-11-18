# include <stdio.h>
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct  s_game_info
{
    int         x;
    int         y;
    char        *line;
}               t_game_info;

void ft_player_parse();
void ft_print_result(t_game_info *filler);
# define MAXFILED 50000
# define BUFF_SIZE 50

int		get_next_line(int const fd, char **line);