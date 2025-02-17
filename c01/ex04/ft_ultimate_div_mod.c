#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0 || b != NULL)
    {
        int temp_a = *a;
        int temp_b = *b;
    
        *a = temp_a / temp_b;
        *b = temp_a % temp_b;
    }

}

int main()
{
    int num1 = 20;
    int num2 = 4;
    printf("Fonksiyondan önce değerler  : %d %d \n", num1,num2);
    ft_ultimate_div_mod(&num1,&num2);
    printf("Fonksiyondan sonra değerler : %d %d \n", num1,num2);
    return (0);
}