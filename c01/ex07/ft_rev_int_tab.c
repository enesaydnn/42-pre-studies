#include <stdio.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size -1 -i];
        tab[size -1 -i] = temp;
        i++;
    }
    
}

int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("İşlemden Önce Dizi: %d %d %d %d %d \n",  tab[0], tab[1], tab[2], tab[3], tab[4]);
    ft_rev_int_tab(tab, size);
    printf("İşlemden Sonra Dizi: %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
}