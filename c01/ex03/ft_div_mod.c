#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
    
}

int main()
{
    int a = 20;
    int b = 5;
    int div; int mod;
    printf("Fonksiyon'dan önce değerler : %d %d \n",a,b);
    ft_div_mod(a,b,&div,&mod);
    printf("Fonksiyon'dan sonra değerler : %d %d \n",div,mod);
    return (0);
}