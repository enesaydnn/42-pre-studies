#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

/*
int main()
{
    char src [] = "Hello42ecole";
    char dest [8];
    ft_strncpy(dest,src,7);
    printf("Kaynak : %s \n", src);
    printf("Hedef : %s \n", dest);
    return 0;
}
*/