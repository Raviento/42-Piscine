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

int ft_strcmp(char *s1,char *s2)
{
    int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
        if(s1[i]<s2[i])
        {
            return (1);
        }
        else if (s1[i]>s2[i])
        {
            return (-1);
        }
        i++;
	}
		
    return (0);

}

int main(){

    char str[10] = "Alutm";
    char str2[10] = "alutu";

    printf("%d",ft_strcmp(str,str2));
}