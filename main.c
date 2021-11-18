#include <stdio.h>
#include <stdlib.h>

void VanIsmetlodes(char karatkerlanc[]);

int main()
{
    /*
    //random double szam tortrésszel
    //iksz de
    double valos;
    double fh = 500; // felso hatar
    double ah = 300; // also hatar
    valos = rand() * (fh-ah) / RAND_MAX + ah
    */

    //srand(time(NULL));
    //rand() % (felsohatar-alsohatar) + alsohatar;

    //char turo[] = {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'};
    char turo[] = {'n','n','z','r','a','w','d','f','v','b','\0'};
    VanIsmetlodes(turo);
    if('p' == 'n') printf("a");

}

void VanIsmetlodes(char karakterlanc[])
{
    int i, j = 0;
    for(i = 1; /* i<=10 */ karakterlanc[i] != '\0' ; i++)
    {
        if(karakterlanc[i]==karakterlanc[i-1]) j = 1;
    }
    if (j == 1) printf("van ismetlodes");
    else printf("nincs ismetlodes");
}

