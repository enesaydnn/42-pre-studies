#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
             i++;
             
    
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    
    return result * sign;
    
}

int main(void)
{
    char str1[] = "    ---+--+1234ab567";
    char str2[] = "+456";

    printf("Sonuç 1 : %d\n", ft_atoi(str1));
    printf("Sonuç 2 : %d\n", ft_atoi(str2));

    return 0;
}
