#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    int i = 0;
    if (str[i] == '\0')
    {
        return 1;
    }

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main ()
{
    printf("Sonuç : %d \n",ft_str_is_printable("5769815642"));
    printf("Sonuç : %d \n",ft_str_is_printable("\t \n"));
    printf("Sonuç : %d \n",ft_str_is_printable("Merhaba "));
    printf("Sonuç : %d \n",ft_str_is_printable(""));
    return (0);
}