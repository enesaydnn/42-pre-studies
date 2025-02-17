#include <stdio.h>
int     ft_str_is_numeric(char *str)
{
    int i = 0;
    if (str[i] == '\0')
    {
        return 1;
    }
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
      i++;
    }
    return 1;
}

int main ()
{
    printf("Sonuç : %d \n",ft_str_is_numeric("5769815642"));
    printf("Sonuç : %d \n",ft_str_is_numeric("Merhaba"));
    printf("Sonuç : %d \n",ft_str_is_numeric(""));
    return (0);
}