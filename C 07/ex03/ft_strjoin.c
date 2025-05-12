
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int ft_lngh(char **strs, int size, char *sep)
{
    int i = 0;
    int lng = 0;
    while (i < size)
    {
        lng += ft_strlen(strs[i]);
        i++;
    }
    lng += (size - 1) * ft_strlen(sep) + 1;  
    return lng;
}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = 0; 
    return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i = 0;
    char *str;

    if (size == 0)
    {
        str = (char *)malloc(sizeof(char));  
        if (!str) return NULL;  
        *str = 0; 
        return str;
    }

    str = (char *)malloc(sizeof(char) * ft_lngh(strs, size, sep));
    if (!str) 
        return NULL;

    *str = 0; 

    while (i < size)
    {
        ft_strcat(str, strs[i]);  
        if (i < size - 1)  
            ft_strcat(str, sep);
        i++;
    }

    return str;
}

int main()
{
 
    char *strs[] = {"Hello", "world", "from", "C"};
    char *sep = " "; 
    int size = 4;    

    char *result = ft_strjoin(size, strs, sep);

    if (result != NULL)
    {
        printf("Birleşmiş string: \"%s\"\n", result);
        free(result); 
    }
    else
    {
        printf("Bellek tahsisi hatası!\n");
    }
    return 0;
}