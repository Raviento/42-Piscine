/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkul <mehkul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:32:22 by mehkul            #+#    #+#             */
/*   Updated: 2025/02/26 18:40:10 by mehkul           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if ((65 <= str[i] && str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}

    return str;

}

int main(){

    char str[10] = "ABC dsf Z";

    printf("%s",ft_strlowcase(str));
}