#include <stdio.h>
#include "ft_h.h"

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putstr(char *str) {
    while (*str) {
        ft_putchar(*str);
        str++;
    }
}

int ft_strlen(char *str) {
    int len = 0;
    while (*str++) {
        len++;
    }
    return len;
}

int ft_strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main() {
    ft_putchar('A');
    ft_putchar('\n');
    
    int x = 5, y = 10;
    ft_swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    ft_putstr("Hello, world!\n");
    
    printf("Length of string 'Hello': %d\n", ft_strlen("Hello"));
    
    printf("Comparison result: %d\n", ft_strcmp("Hello", "Hello"));
    printf("Comparison result: %d\n", ft_strcmp("Hello", "World"));
    
    return 0;
}
