/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_ultimate_range.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkul <mehkul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:59:39 by mehkul            #+#    #+#             */
/*   Updated: 2025/03/06 15:20:54 by mehkul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    i = 0;

    if (min >= max)
        return (-1);
    
    *range = (int *) malloc(sizeof(int) * (max - min));

    while (min < max)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (**range);
}

int main() {
    int a;
    int *arr;
    a = ft_ultimate_range(&arr, 1, 20);
    for(int i = 0; i < 20 - 1; i++)
        printf("%i\n", arr[i]);
    return 0;
}