#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
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
    printf("Birleştirilmemiş Metin (DEST) : %s \n",dest);
    ft_strcat(dest, src);
    printf("Birleştirilmiş   Metin : %s \n",dest);
    return (0);
}