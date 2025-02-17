#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main ()
{
    char src [8] = "Merhaba";
    char dest[8];
    printf("Kopyalanacak Veri : %s \n",src);
    ft_strncpy(dest,src,4);
    printf("Kopyalanmış Hali  : %s \n", dest);
    return (0);
}