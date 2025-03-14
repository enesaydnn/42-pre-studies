#include <unistd.h>

/*
Atama adı : only_z
Beklenen dosyalar : only_z.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------

Standart çıktıda bir 'z' karakteri görüntüleyen bir program yazın.
*/

int main()
{
    write(1,"z",1);
    return (0);
}