#include <stdio.h>
void ft_init_struct()
{
    printf("%s\n", "we prepare the structure");
}

void ft_free_struct()
{
    printf("%s\n", "free the structure");
}

void ft_print_result()
{
    printf("%s\n", "print result");
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
    ft_init_struct();
    ft_parse_input();
    ft_game_decesion();
    ft_print_result();
    ft_free_struct();
    return(0);
}