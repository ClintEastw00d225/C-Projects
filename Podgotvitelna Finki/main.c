#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int poeni, ocenka;
//    printf("Vnesi poeni:\n");
//    scanf("%d", &poeni);
//
//    if(poeni <= 50){
//        printf("Ispitot e padnat");
//    }
//    else if(poeni <= 60){
//        printf("Ocenkata e 6");
//    }
//    else if(poeni <= 70){
//        printf("Ocenkata e 7");
//    }
//    else if(poeni <= 80){
//        printf("Ocenkata e 8");
//    }
//    else if(poeni <= 90){
//        printf("Ocenkata e 9");
//    }
//    else if(91 <= 100){
//        printf("Ocenkata e 10");
//    }
//    else
//        printf("Vneseniot broj na poeni e pregolem");


//int a = 0, b = 0, c = 0;
//int operator;
//
//printf("Vnesi go prviot broj:\n");
//scanf("%d", &a);
//printf("Vnesi koja operacija sakas da bide izvrsena 0-sobiranje, 1-odzemanje, 2-mnozenje, 3-delenje\n");
//scanf("%d", &operator);
//printf("Vnesi go vtoriot broj:\n");
//scanf("%d", &b);
//
//switch(operator)
//{
//case 0:
//    c=a+b;
//    break;
//case 1:
//    c=a-b;
//    break;
//case 2:
//    c=a*b;
//    break;
//case 3:
//    c=a/b;
//    break;
//
//    default:
//printf("Vnesovte nevaliden operator ");
//
//}
//printf("Rezultatot e %d", c);


//IF ELSE PLAVVA ZBIRKA 17ZAD
//char znak;
//
//printf("Vnesete go znakot:\n");
//scanf("%c", &znak);
//
//if((znak >= 65 && znak <= 90) || (znak >= 90 && znak <= 122)
//{
//    printf("Vnesovte bukva");
//}
//else if(znak >= 48 && znak <= 57)
//{
//    printf("Vnesovte numericki znak");
//}
//else
//    printf("Vnesovte nevaliden znak");


//IF ELSE PLAVA ZBIRKA 19 ZADACA
//int broj;
//
//printf("Vnesi broj:");
//scanf("%d", &broj);
//
//if(broj%5==0 && broj%11==0)
//{
//    printf("%d e deliv so 5 i 11", broj);
//}
//else
//    printf("%d ne e deliv so 5 i 11", broj);


//IF - ELSE PLAVA ZBIRKA 20 ZAD
//int broj;
//printf("Vnesi go brojot:\n");
//scanf("%d", &broj);
//
//int podeleno = broj/1000000;
//
//if(podeleno == 70 || podeleno == 71 || podeleno || 72)
//{
//    printf("%03d/%d-%d - T-mobile", podeleno, broj%1000000/1000, broj%1000);
//
//}
//else if(podeleno == 75 || podeleno == 76)
//{
//    printf("%03d/%d-%d - One", podeleno, broj%1000000/1000, broj%1000);
//}
//else if(podeleno == 77 || podeleno == 78)
//{
//    printf("%03d/%d-%d - Vip", podeleno, broj%1000000/1000, broj%1000);
//}
//else
//    printf("Vnesovte nevaliden broj");


//SWITCH CASE 38 ZAD
//float num1, num2, result;
//char op;
//
//printf("Vnesete broj1 operator broj2\n");
//scanf("%f %c %f", &num1, &op, &num2);
//
//switch(op)
//{
//    case '+':
//    result = num1+num2;
//    break;
//
//    case '-':
//    result = num1-num2;
//    break;
//
//    case '*':
//    result = num1*num2;
//    break;
//
//    case '/':
//    result = num1/num2;
//    break;
//
//    default:
//        printf("Vnesovte nevaliden operator");
//
//}
//    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);


//char bukva;
//printf("Vnesete bukva:\n");
//scanf("%d", &bukva);
//
//switch(bukva)
//{
//case 'a':
//    printf("Samoglaska");
//    break;
//case 'e':
//    printf("Samoglaska");
//    break;
//case 'i':
//    printf("Samoglaska");
//    break;
//case 'o':
//    printf("Samoglaska");
//    break;
//case 'u':
//    printf("Samoglaska");
//    break;
//default:
//    printf("Soglaska")
//}

//CIKLUSI PLAVA ZBIRKA 41
//int broj, brojac = 0, suma = 0;
//while(scanf("%d", &broj))
//{
//    if(broj == 0)
//        break;
//        brojac++;
//        suma+=broj;
//}
//printf("Aritmeticka sredina na broevite e %.2f", suma*1.0/brojac);


//int n, i, delitel, zbir, broj, maksimum = 0;
//printf("Vnesete go n:\n");
//scanf("%d", &n);
//
//for(i = 1; i < n; i++)
//{
//    zbir=0;
//    for(delitel = 1; delitel <= i/2; delitel++)
//    {
//        if(i%delitel==0)
//            zbir+=delitel;
//    }
//    if(maksimum < zbir){
//        maksimum=zbir;
//        broj=i;
//    }
//
//}
//printf("%d\n", broj);

//podgotvitelna
//int a,b;
//char op;
//printf("Vnesi a operator b\n");
//scanf("%d %c %d", &a, &op, &b);
//if(op == '+')
//{
//    printf("%d %c %d = %d\n", a, op, b, a+b);
//}
//else if(op == '-')
//{
//    printf("%d %c %d = %d\n", a, op, b, a-b);
//}
//else if(op == '*')
//{
//    printf("%d %c %d = %d\n", a, op, b, a*b);
//}
//else if(op == '/')
//{
//    printf("%d %c %d = %d\n", a, op, b, a/b);
//}
//else
//    printf("Vnesovte pogresen operator!");


//podgotvitelna
//int x;
//printf("Vnesi stepeni na agol: \n");
//scanf("%d", &x);
//if(x < 90)
//{
//    printf("Agolot e ostar\n");
//}
//else if (x == 90)
//{
//    printf("Agolot e prav\n");
//}
//else if(x > 90 && x < 180)
//{
//    printf("Agolot e tap\n");
//}
//else
//    printf("Vnesovte pogresen broj na stepeni");


//podgotvitelna
//int x, y, z;
//printf("Vnesi broj:\n");
//scanf("%d %d %d", &x, &y, &z);
//if(x > y)
//    if(x > z)
//        printf("%d e najgolem broj\n", x);
//    else
//        printf("%d e najgolem broj\n", z);
//else if (y > z)
//    printf("%d e najgolem broj\n", y);
//else
//    printf("%d e najgolem broj\n", z);


//Zadaci za vezbanje 28.09.2022
//podgotvitelna
//int broj;
//printf("Vnesi broj:\n");
//scanf("%d", &broj);
//if((broj%3 == 0 && broj%5==0))
//{
//    printf("%d e deliv so 3 i 5");
//}
//else if(broj%3==0)
//{
//    printf("%d e deliv so 3", broj);
//}
//else if(broj%5==0)
//{
//    printf("%d e deliv so 5", broj);
//}
//else
//    printf("%d ne e deliv so 3 ili 5", broj);

//2 zad
//char c;
//c = getchar();
//if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
//{
//    switch(c){
//case 'a':case 'e':case 'i':case 'o':case 'u':
//case 'A':case 'E': case 'I':case 'O':case 'U':
//        printf("Znakot %c e samoglaska\n", c);
//    default:
//        printf("Znakot %c e soglaska\n", c);
//    }
//
//}
//else if((c >= '0' && c <= '9'))
//{
//    printf("Znakot %c e brojka", c);
//}
//else
//    printf("Znakot %c e speecijalen znak");


//3 Zadaca
//int broj=0, zbir=0, i;
//
//for(i = 100; i <= 200; i++){
//if(i%9==0){
//    zbir+=i;
//    broj++;
//    }
//
//}
//printf("Zbirot na broevite delivi so 9 e %d\n", zbir);
//printf("Brojot na broevite sto se delivi so 9 e %d\n", broj);
//


//4 Zadaca
//int sumOfDivisors(int num){ //funkcija
//    int i, sum=0;
//    for(i = 0; i < num; i++){
//        if(num%i == 0){
//            sum+=i;
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int num;
//    scanf("%d", &num);
//
//    if(num % sumOfDivisors(num)==0){
//       printf("Perfect num\n");
//    }
//    else {
//        printf("Regular num\n");
//    }

int i,j,n;
scanf("%d", &n);

for(i = 1; i <= n; i++){
    for(j = 1; j <= i; j++){
        printf("%d", j);
    }
    printf("\n");
}


return 0;
}

