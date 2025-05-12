/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkul <mehkul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:32:22 by mehkul            #+#    #+#             */
/*   Updated: 2025/02/28 18:40:10 by mehkul           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int src_len = 0;
    
    while(src[src_len])
    {
        src_len++;
    }

    if (size == 0)
		return (src_len);

    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    
    return (src_len);
}
