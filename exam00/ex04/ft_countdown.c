 #include <unistd.h>
 /*
Atama adı : ft_countdown
Beklenen dosyalar : ft_countdown.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------
Tüm rakamları azalan sırada görüntüleyen bir program yazın ve ardından
satırsonu.

Örnek:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

int main()
{
    int str = '9';
    while (str >= '0')
    {
        write(1,&str,1);
        str--;
    }
    write(1,"\n",1);
    return (0);
}