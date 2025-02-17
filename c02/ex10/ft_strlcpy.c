#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;

    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    while (src[i] != '\0')
    {
        i++;
    }

    return i;
}

int main ()
{
    char src [8] = "Merhaba";
    char dest[8];
    
    printf("Kopyalanak Veri : %s \n", src);
    int len = ft_strlcpy(dest, src, 4);
    
    printf("Kopyalanmış Veri : %s \n", dest);
    printf("Dizi Uzunluğu %u \n", len);

    return 0; 
}
