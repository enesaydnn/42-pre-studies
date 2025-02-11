#include <stdio.h>
char    *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i]!= '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/*
int main()
{
    char src [] = "Hello42ecole";
    char dest[13];
    ft_strcpy(dest,src);
    printf("Kaynak : %s \n", src);
    printf("Hedef : %s \n",dest);
    return 0;
}
*/