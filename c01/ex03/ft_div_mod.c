#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0) // Matematik'te 0 bölüm tanımsızdır.
    {
    *div = a / b;
    *mod = a % b;
    } 
}

/*
int main()
{
    int num1 = 10; 
    int num2 = 2;
    int div; int mod;
    printf("Sayılar işleme girmeden önce : %d %d \n",num1, num2);
    ft_div_mod(num1,num2,&div,&mod);
    printf("Sayılar işleme girdikten sonra : %d %d \n",div, mod);
    return 0;
}
*/