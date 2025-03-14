#include <unistd.h>
/*
Atama adı : maff_revalpha
Beklenen dosyalar : maff_revalpha.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------
Alfabeyi tersten gösteren bir program yazın, çift harfler
büyük harf ve tek harfler küçük harf, ardından satırsonu.

Örnek:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

/*
Bunu iki farklı yapabilirsin, Fonksiyon yazarak Veya Tüm alfabeyi yazdırır Sonra çift olanları büyük yaparsın. Tabi Örnek çıktı vermezse verirse kopyala yapıştır.

int main()
{
    int str = 'z';
    while (str >= 'a')
    {
        write(1,&str,1);
        str--;
    }
}
*/

int main()
{
    write(1,"zYxWvUtSrQpOnMlKjIhGfEdCbA",26);
    write(1,"\n",1);
    return (0);
}