#include <unistd.h>
/*
Atama adı : only_a
Beklenen dosyalar : only_a.c
İzin verilen işlevler: write
--------------------------------------------------------------------------------
Standart çıktıda bir 'a' karakteri görüntüleyen bir program yazın.
*/

int main()
{
   write(1,"a",1);
   return (0); 
}