/*
Atama adı : aff_first_param
Beklenen dosyalar : aff_first_param.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------

Dizeleri argüman olarak alan ve ilk dizeyi görüntüleyen bir program yazın
argümanının ardından bir \n gelir.

Bağımsız değişken sayısı 1'den azsa, program \n görüntüler.

Örnek :
$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$
*/
#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if (ac > 1)
    {
        while (av[1][i])
        {
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return (0);
}