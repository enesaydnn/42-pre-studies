/*
Atama adı : aff_last_param
Beklenen dosyalar : aff_last_param.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------

Dizeleri argüman olarak alan ve sonuncusunu görüntüleyen bir program yazın
argümanının ardından bir satırsonu gelir.

Bağımsız değişken sayısı 1'den azsa, program bir satırsonu görüntüler.

Örnekler:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

#include <unistd.h>
void ft_putchar (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }

}

int main(int ac, char **av)
{
   int i = ac -1;
   if (ac > 1)
   {
        ft_putchar(av[i]);
        write(1,"\n",1);
        i--;
   }
   write(1,"\n",1);
   return (0);
}
