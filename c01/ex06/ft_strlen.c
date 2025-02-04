#include <stdio.h>
int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

/*
int main()
{
    printf("Uzunluk :  %d \n",ft_strlen("Merhaba Ben İbrahim Yılmaz İnstagramda 17M takipçim var"));
    return 0;
}
*/