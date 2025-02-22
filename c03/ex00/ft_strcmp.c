#include <stdio.h>
int     ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i];
}

int main ()
{
    printf("Ascii Değer Farkı : %d \n",ft_strcmp("code", "coder"));
    return (0);
}