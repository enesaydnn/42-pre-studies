#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    (void)ac;
    while (av[0][i])
    {
        write(1,&av[0][i],1);
        i++;
    }
    write(1,"\n",1);
    return (0);
}