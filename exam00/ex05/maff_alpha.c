#include <unistd.h>
/*
Atama adı : maff_alpha
Beklenen dosyalar : maff_alpha.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------
Alfabeyi çift harfler büyük olacak şekilde görüntüleyen bir program yazın ve
Küçük harfli tek harfler ve ardından satırsonu.

Örnek:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

/*
Bunu iki farklı yapabilirsin, Fonksiyon yazarak Veya Tüm alfabeyi yazdırır Sonra çift olanları büyük yaparsın. Tabi Örnek çıktı vermezse verirse kopyala yapıştır.

int main()
{
    int str = 'a';
    while (str <= 'z')
    {
        write(1,&str,1);
        str++;
    }
}
*/
int main()
{
    write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ",26);
    write(1,"\n",1);
    return (0);
}