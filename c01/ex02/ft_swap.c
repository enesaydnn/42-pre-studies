#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp_a = *a;
    *a = *b;
    *b = temp_a;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    printf("Sayıların Birincil Hali : %d %d \n", num1, num2);
    ft_swap(&num1, &num2);
    printf("Sayıların İkincil  Hali : %d %d \n",num1,num2);
    return (0);
}