#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

int main ()
{
    char src [10] = "Dünya";
    char dest[15] = "Merhaba ";
    printf("Birleştirilmemiş Metin (SRC) : %s \n",src);
    printf("Birleştirilmemiş Metin (DEST): %s \n",dest);
    ft_strncat(dest,src,4);
    printf("Birleştirilmiş   Metin : %s \n",dest);
    return (0);
}