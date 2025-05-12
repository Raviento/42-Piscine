/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkul <mehkul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:32:22 by mehkul            #+#    #+#             */
/*   Updated: 2025/02/26 18:40:10 by mehkul           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
int	i;

    if(str[0] == '\0')
    {
    return (1);
    }

	i = 0;
	while (str[i] != '\0' )
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(){

    char str[10] = "";

    printf("%d",ft_str_is_uppercase(str));
}