#include "../../inc/filler.h"

int ft_init_struct(t_game_info *filler)
{
    filler->x = 0;
    filler->y = 0;
    filler->line = NULL;
    filler->num = NULL;
    printf("%s\n", "we prepare the structure");
    return(0);
}