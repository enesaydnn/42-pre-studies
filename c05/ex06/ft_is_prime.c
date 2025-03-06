#include <stdio.h>

int ft_is_prime(int nb)
{
    if(nb < 1)
        return (0);
    
    if(nb == 2)
        return (1);
    
    if(nb % 2 == 0)
        return (0);
    
    int i = 3;
    while (i * i <= nb)
    {
        if (nb %i == 0)
            return (0);
        i += 2;
    }
    return (1);
}

int main()
{
    printf("Sonuç : %d \n",ft_is_prime(5));
    return (0);
}