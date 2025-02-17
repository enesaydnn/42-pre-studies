#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
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
    printf("SRC : %s \n",src);
    ft_strcpy(dest,src);
    printf("DEST : %s \n", dest);
    return (0);
}