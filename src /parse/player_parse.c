#include "../../inc/filler.h"

void ft_player_parse(t_game_info *filler)
{
    int ret;
    
    ret = get_next_line(STDIN_FILENO, &(filler->line));
    printf("%s\n", filler->line);
}