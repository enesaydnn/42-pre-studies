#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    
    while (src[i] != '\0' && i < size -1)
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

/*
int main()
{
    char src [] = "Lorem Ipsum";
    char dest[5];
    printf("Copy : %s \n",src);
    unsigned int len = ft_strlcpy(dest, src, 4);
    printf("Paste : %s \n",dest);
    printf("Length : %u \n",len);
    return 0;
}
*/













