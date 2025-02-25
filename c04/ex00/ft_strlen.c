#include <stdio.h>
int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main ()
{
    printf("Karakter Uzunluğu : %d \n",ft_strlen("Herkese Merhaba"));
    return (0);
}