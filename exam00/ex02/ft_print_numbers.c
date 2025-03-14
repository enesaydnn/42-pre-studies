#include <unistd.h>
/*
Atama adı : ft_print_numbers
Beklenen dosyalar : ft_print_numbers.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------
Tüm rakamları artan sırada görüntüleyen bir fonksiyon yazın.

Fonksiyonunuz aşağıdaki gibi bildirilmelidir:

void ft_print_numbers(void);
*/

void ft_print_numbers(void)
{
    int str = '0';
    while (str <= '9')
    {
        write(1,&str,1);
        str++;
    }
}

int main()
{
    ft_print_numbers();
    return(0);
}