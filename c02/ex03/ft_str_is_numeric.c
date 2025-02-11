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
/*
int main()
{
    printf("%d \n", ft_str_is_numeric("0678"));
    printf("%d \n", ft_str_is_numeric("Lorem"));
    printf("%d \n",ft_str_is_numeric(""));
    return 0;
}
*/
