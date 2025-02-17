#include <unistd.h>
void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1,&str[i],1);
        str++;
    }
}

int main()
{
    ft_putstr("STDOUT");
    return (0);
}