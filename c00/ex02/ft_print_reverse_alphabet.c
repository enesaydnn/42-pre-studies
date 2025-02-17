#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char str = 'z';
    while (str >= 'a')
    {
        write(1,&str,1);
        str--;
    }
    
}
int main()
{
    ft_print_reverse_alphabet();
    return (0);
}