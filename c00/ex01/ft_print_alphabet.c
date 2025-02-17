#include <unistd.h>

void    ft_print_alphabet(void)
{
    char str = 'a';
    while (str <= 'z')
    {
        write(1,&str,1);
        str++;
    }

}

int main ()
{
    ft_print_alphabet();
    return (0);
}