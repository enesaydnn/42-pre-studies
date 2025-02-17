#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int number = 10;
    printf("Fonksiyon Çalışmadan önce : %d \n",number);
    ft_ft(&number);
    printf("Fonksiyon Çalıştıktan Sonra : %d \n",number);
    return (0);
}