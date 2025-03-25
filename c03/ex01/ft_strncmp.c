#include <stdio.h>
int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }

    if (i == n)
    {
        return (0);
    }

    return s1[i] - s2[i];
}


int main()
{
    printf("Ascii Değer Farkı : %d\n",ft_strncmp("code","coder",4));
    return (0);
}
