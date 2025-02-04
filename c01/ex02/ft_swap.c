#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
int main ()
{
    int num1 = 10; int num2 = 20;
    printf("Swap İşleminden Önce: %d %d \n",num1,num2);
    ft_swap(&num1,&num2);
    printf("Swap İşleminden Sonra: %d %d \n",num1,num2);
    return 0;
}
*/