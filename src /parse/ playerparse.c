#include "../../inc/filler.h"

void ft_player_parse(t_game_info *filler)
{
    int ret;

    filler->line = malloc(sizeof(char) * 500);
    ret = get_next_line(STDIN_FILENO, &(filler->line));
    printf("%s\n", filler->line);
}