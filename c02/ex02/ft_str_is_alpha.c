#include <stdio.h>
int ft_str_is_alpha(char *str)
{
    int  i = 0;
    
    if (str[i] == '\0')
    {
        return 1;
    }

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z' || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main ()
{
    printf("Sonuç : %d \n",ft_str_is_alpha("Merhaba"));
    printf("Sonuç : %d \n",ft_str_is_alpha(""));
    printf("Sonuç : %d \n",ft_str_is_alpha("Merhaba ?"));
    return (0);
}