#include <unistd.h>

void    ft_print_numbers(void)
{
    char str = '0';
    while (str <= '9')
    {
        write(1,&str,1);
        str++;
    }
    
}

int main ()
{
    ft_print_numbers();
    return (0);
}

