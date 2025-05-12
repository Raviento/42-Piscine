#include <stdio.h>
#include "ft_boolean.h"

void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
}

t_bool ft_is_even(int nbr) {
    return EVEN(nbr);
}

int main(int argc, char **argv) {
    if (ft_is_even(argc - 1)) {
        ft_putstr(EVEN_MSG);
    } else {
        ft_putstr(ODD_MSG);
    }
    return SUCCESS;
}
