#include "../inc/filler.h"

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
    int         res;

    ft_init_struct(&filler);
    if ((res = ft_player_parse(&filler)) == 1)
        return(1);
    /*while (1)
    {
        ft_parse_input();
        ft_game_decesion();
        ft_print_result(&filler);
        ft_free_struct();
    }*/
    return(0);
}