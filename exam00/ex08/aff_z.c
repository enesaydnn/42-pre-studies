/*
Atama adı : aff_z
Beklenen dosyalar : aff_z.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------

Bir dize alan ve ilk 'z'yi görüntüleyen bir program yazın
karakteriyle karşılaşır ve ardından bir satırsonu gelir. Eğer hiç yoksa
Dizede 'z' karakteri varsa, program 'z'nin ardından şunları yazar
bir satırbaşı ile. Parametre sayısı 1 değilse, program şunları görüntüler
'z' ve ardından bir satırbaşı.

Örnek:

$> ./aff_z “abc” | cat -e
z$
$> ./aff_z “dubO a POIL” | cat -e
z$
$> ./aff_z “zaz sent le poney” | cat -e
z$
$> ./aff_z | cat -e
z$
*/


#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == 'z')
            {
                write(1, "z\n", 2);
                return (0);
            }
            i++;
        }
        write(1, "z\n", 2);
    }
    else
    {
        write(1, "z\n", 2);
    }
    return (0);
}