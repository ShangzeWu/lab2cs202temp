#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
//    printf(1,"test1 before set ticket30\n");

    set_tickets(30);
//    printf(1,"test1 after set ticket30\n");
    int i,k;
    const int loop=43000;
    for(i=0;i<loop;i++)
    {
        asm("nop"); //in order to prevent the compiler from optimizing the for loop
        for(k=0;k<loop;k++)
        {
            asm("nop");
        }
    }
    gettime();
    exit();
}