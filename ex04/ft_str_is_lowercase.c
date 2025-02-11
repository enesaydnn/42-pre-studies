#include <stdio.h>
int     ft_str_is_lowercase(char *str)
{
    int i = 0;
    if (str[i] == '\0')
    {
        return 1;
    }
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    printf("%d \n", ft_str_is_lowercase("lorem"));
    printf("%d \n", ft_str_is_lowercase("Lorem"));
    printf("%d \n", ft_str_is_lowercase(""));
    return 0;
}
*/