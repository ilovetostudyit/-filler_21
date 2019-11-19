#include "../../inc/filler.h"

int double_array_free(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free(array);
    return(0);
}

int double_array_len(char **array)
{
    int i;

    i = 0;
    while (array[i])
        i++;
    return(i);
}