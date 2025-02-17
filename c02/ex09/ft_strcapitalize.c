#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int first = 1;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (first)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 'a' + 'A';
                }
                first = 0;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] - 'A' + 'a';
            }
        }
        else
        {
            first = 1;
        }
        i++;
    }
    return str;
}

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Dönüştürülmüş Metin: %s\n", ft_strcapitalize(str));
    return (0);
}