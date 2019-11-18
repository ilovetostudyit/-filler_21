#include "../inc/filler.h"

void ft_init_struct(t_game_info *filler)
{
    filler->x = 0;
    filler->y = 0;
    filler->line = NULL;
    printf("%s\n", "we prepare the structure");
}

void ft_free_struct()
{
    printf("%s\n", "free the structure");
}

void ft_game_decesion()
{
    printf("%s\n", "game decesion");
}

void ft_parse_input()
{
    printf("%s\n", "parse input");
}

int main()
{
    t_game_info filler;
    ft_init_struct(&filler);
    ft_player_parse(&filler);
    /*while (1)
    {
        ft_parse_input();
        ft_game_decesion();
        ft_print_result(&filler);
        ft_free_struct();
    }*/
    return(0);
}