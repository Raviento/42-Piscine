#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point) {
    point->x = 42;
    point->y = 21;
}

int main() {
    t_point p;
    set_point(&p);
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    return 0;
}