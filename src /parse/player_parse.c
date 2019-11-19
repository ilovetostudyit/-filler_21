#include "../../inc/filler.h"

static int get_player_number(t_game_info *filler)
{
    char    **player_info;
    
    player_info = NULL;
    player_info = ft_strsplit(filler->line, ' ');
    if (double_array_len(player_info) >= 3)
        filler->num = player_info[2];
    else
    {
        double_array_free(player_info);
        return(1);
    }
    double_array_free(player_info);
    return(0);
}

static int get_player_line(char **line)
{
    int     res;
    if ((res = get_next_line(STDIN_FILENO, line)) != 1)
    {
        if (res == 0)
            free(*line);
        return(1);
    }
    printf("%s\n", *line);
    return(0);
}

int ft_player_parse(t_game_info *filler)
{
    int     res;
    
    if ((res = get_player_line(&(filler->line))) == 1)
        return(1);
    get_player_number(filler);
    printf("%s\n", filler->num);
    
    return(0);
}