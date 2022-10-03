#include <stdio.h>
#include <stdlib.h>

int main()
{

//POLESNI ZADACI (PLAVA ZBIRKA STRUKTURNO)

/*
int datum;
printf("Vnesi datum:\n");
scanf("%d", &datum);
printf("%02d.%02d.%d", datum/1000000, datum/10000%100, datum%10000);
*/

/*
int x;
printf("Vnesi go x:\n");
scanf("%d", &x);
printf("X = %d\n", x, x*x);
*/

/*
char znak;
printf("Vnesete go znakot:\n");
scanf("%c", &znak);
if(znak >= 97)&&(znak <= 122)
   printf("1");
else
    printf("0");
*/

char znak;
printf("Vnesete go znakot:\n");
scanf("%d", &znak);
if((znak >= 'a') && (znak <= 'z'))
   printf("1");
else
    printf("0");

    return 0;
}
