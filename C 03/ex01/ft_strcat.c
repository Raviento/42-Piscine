/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkul <mehkul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:28:22 by mehkul            #+#    #+#             */
/*   Updated: 2025/02/26 18:40:10 by mehkul           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest,char *src)
{
    char *control;

    control = dest;
    
    while(*control != '\0')
    {
        control++;
    }

    while(*src != '\0')
    {
        *control = *src;
        src++;
        control++;
    }
    
    *control = '\0';

    return (dest);
}

int main(){

    char str[20] = "Alutm";
    char str2[10] = "alutu";

    ft_strcat(str,str2);

    printf("%s",str);
}