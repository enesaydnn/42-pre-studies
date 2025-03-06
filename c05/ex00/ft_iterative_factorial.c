#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;
    
    if (nb < 0)
        return 0;
    
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    
    return result;
}

int main()
{
    printf("Sonuç : %d \n",ft_iterative_factorial(5));
    return 0;
}
