#include <stdio.h>
int ft_sqrt(int nb)
{
    int i = 0;

    if (nb < 0)
        return (0);
    
    while (i * i <= nb)
    {
        if (i * i == nb)
        {
            return (i);
        }
       i++;
    }
    return (0);
}

int main()
{
    printf("Sonuç : %d \n",ft_sqrt(144));
    return (0);
}