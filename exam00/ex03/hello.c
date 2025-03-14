#include <unistd.h>
/*
Ödev adı : hello
Beklenen dosyalar : hello.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------
“Merhaba Dünya!” ve ardından bir \n görüntüleyen bir program yazın.

Örnek:

$>./hello
Merhaba Dünya!
$>./hello | cat -e
Merhaba Dünya!$
$>
*/

int main()
{
    write(1,"Hello World!",12);
    write(1,"\n",1);
    return (0);
}