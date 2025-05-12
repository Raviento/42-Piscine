/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkul <mehkul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:32:22 by mehkul            #+#    #+#             */
/*   Updated: 2025/02/26 18:40:10 by mehkul           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
    int	i;
    int control = 1;

	i = 0;
	while (str[i] != '\0' )
	{
        if(!((97 <= str[i] && str[i] <= 122)
            || (65 <= str[i] && str[i] <= 90))
            && !(48 <= str[i] && str[i] <= 57))
        {
            control = 1;
        }

		if ((97 <= str[i] && str[i] <= 122)
        && control == 1)
		{
			if(((97 <= str[i+1] && str[i+1] <= 122)
            || (65 <= str[i+1] && str[i+1] <= 90))
            && !('0' <= str[i-1] && str[i-1] <= '9'))
            {
                str[i] -= 32;
                control = 0;
            }
            else
            {
                control = 0;
            }
		}
		i++;
	}

    return str;

}

int main(){

    char str[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s",ft_strcapitalize(str));
}