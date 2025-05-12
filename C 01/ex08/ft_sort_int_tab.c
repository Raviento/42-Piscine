void	ft_sort_int_tab(int *tab, int size)
{
	int		swap;
	int		count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

int main(){

        int dizi[5] = {45,654,54,32,23};    
        ft_sort_int_tab(dizi,5);
        
        printf("%d %d %d %d %d",dizi[0],dizi[1],dizi[2],dizi[3],dizi[4]);
}