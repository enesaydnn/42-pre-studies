#include <unistd.h>
int main(int ac, char **av)
{
   int i = 1;
   while(av[i])
   {
       int j = 0;
       while(av[i][j])
       {
           write(1,&av[i][j],1);
           j++;
       }
       write(1,"\n",1);
       i++;
   }
   return (0);
}