#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
#define MAX 100

int main()
{
//--------------------Strukturno 1-------------------

//    float x = 3.0 /2 + (5 - 46 * 5.0 / 12);
//    printf("x = %.2f\n");


//    int x = 7;
//    printf("Brojot %d na kvadrat e %d\n",x, x * x);


//    float a=5.0, b=7.5, c=10.2;
//    float L = a + b + c;
//    float s = L/2;
//    float P = s * (s-a) * (s-b) * (s-c);
//    printf("Perimetarot e %.2f\n", L);
//    printf("Kvadratot na plostinata e %.2f\n", P);

//    int a=3;
//    int b=5;
//    int c=12;
//    float as = (a + b + c) / 3.0;
//    printf("Aritmeticka sredina e %.2f", as);
//

//      int a = 19;
//      printf("Ostatokot pri delenje so 2 e: %d\n", a%2);
//      printf("Ostatokot pri delenje so 3 e: %d\n", a%3);
//      printf("Ostatokot pri delenje so 5 e: %d\n", a%5);
//      printf("Ostatokot pri delenje so 8 e: %d\n", a%8);


//      #define PI 3.14
//      float radius;
//      scanf("%f", &radius);
//      float perimetar = 2 * radius * PI;
//      float plostina = radius * radius * PI;
//      printf("L = %f\n", perimetar);
//      printf("P = %f\n", plostina);


/*    int x, y;
      scanf("%d %d", &x, &y);

      printf("%d + %d = %d\n", x, y, x + y);
      printf("%d - %d = %d\n", x, y, x - y);
      printf("%d * %d = %d\n", x, y, x * y);
      printf("%d %% %d = %d\n", x, y, x % y);//ostatok
*/


//      char c;
//      printf("Vnesete golema bukva: ");
//      scanf("%c", &c);
//      printf("%c malo se pishuva: '%c'\n",c, c + ('a' - 'A'));


/*int integer1;
int integer2;
int sum;
float kol;

printf("Vnesi prv cel broj: \n");
scanf("%d", &integer1);
printf("Vnesi vtor cel broj: \n");
scanf("%d", &integer2);

sum=integer1 + integer2;// se dodeluva zbirot na sum
kol = (float) integer1/integer2;//dodeli go kolicnikot na kol
       //cast operator (operator koj ovozmozuva preminuvanje od eden vo drug tip)

printf("Nivnata sum e %d\n", sum);//pecati suma
printf("Nivniot kolicnik e %.2f\n", kol);//pecati kolona
*/

//---------------Strukurno 2-----------------

/*char ch;
int rez;
printf("Vnesi znak: \n");
scanf("%c", &ch);
rez = (ch >= 'a') && (ch <= 'z');//ako e bukva ke kompajlira 1, ako e brojka 0
printf("%d\n", rez);
*/


/*int x, y, z;
printf("Vnesi x i y\n");
scanf("%d%d",&x,&y);
z=x++ + --y + (x<y);//preku izrazot go dobivame rezultatot
printf("z=%d\n", z);
*/

/*int x=1, y=2, z=3, r;
r=(x<y || y<z++);
printf("r = %d, z = %d\n", r, z);
r=(x>y && y<z++);
printf("r = %d, z = %d\n", r, z);
*/


/*float cena;
printf("Vnesete cena na proizvod:\n");
scanf("%f", &cena);
printf("Vkupno cena na proizvodot e %.2f\n", cena * 1.18);//deka DDV e 18% od pocetnata cena
*/

/*float cena, kamata, rata, vkupno;
int broj_na_rati;
printf("Vnesete cena na proizvod\n");
scanf("%f", &cena);
printf("Vnesete go brojot na rati:");
scanf("%d", &broj_na_rati);
printf("Vnesete kamata na proizvodot:");
scanf("%f", &kamata);
vkupno = cena * (1 + kamata / 100);//vkupnata suma sto ke se isplati za proizvodot
rata = vkupno / broj_na_rati;//iznosot na ratata
printf("Edna rata ke iznesuva %.3f\n", rata);
printf("Vkupnata suma sto ke se isplati za proizvodot ke bide %.3f\n", vkupno);
*/


/*int broj;
printf("Vnesi tricifren broj:\n");
scanf("%d", &broj);
printf("Najznacajnata cifra e %d , a najmalku znacajnata e %d\n", (broj/100), (broj%100));
*/


/*long int datum;
int den, mesec;
printf("Vnesi datum na raganje\n");
scanf("%ld", &datum);
den = datum / 1000000;
mesec = (datum / 10000) % 100;
printf("Denot i mesecot na raganje se %02d.%02d\n", den, mesec);
*/


//-------------------Strukturno3---------------------

/*int a,b;
printf("Vnesi dva broja:\n");
scanf("%d%d", &a,&b);
if(a > b)
    printf("Maximum: %d\n", a);
else
    printf("Maximum: %d\n", b);
*/


/*int godina;
printf("Vnesi godina:\n");
scanf("%d", &godina);
if((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0)//e prestapna ako e deliva so 4 no ne i deliva so 100 ili e deliva so 400
    printf("%d e prestapna\n", godina);
else
    printf("%d ne e prestapna\n", godina);
*/


/*float x,y;
printf("Vnesi koordinati na edna tocka od ramnina\n");
scanf("%f%f", &x, &y);
if (x > 0 && y > 0)
    printf("1 kvadrant\n");//desno gore
if (x > 0 && y < 0)
    printf("4 kvadrant\n");//desno dole
if (x < 0 && y > 0)
    printf("2 kvadrant\n");//levo gore
if (x <0 && y < 0)
    printf("3 kvadrant\n");//levo dole
*/


/*int poeni, ocenka=0;
printf("Vnesi broj na poeni:\n");
scanf("%d", &poeni);
if (poeni >= 0 && poeni <= 50) ocenka = 5;
else if(poeni > 50 && poeni <= 60) ocenka = 6;
else if(poeni > 60 && poeni <= 70) ocenka = 7;
else if(poeni > 70 && poeni <= 80) ocenka = 8;
else if(poeni > 80 && poeni <= 90) ocenka = 9;
else if(poeni > 90 && poeni <= 100) ocenka = 10;
else printf("Nevalidna vrednost na poeni!\n");
printf("Ocenka %d\n", ocenka);
*/

//-----prodolzenie od istata zadaca, ama novi baranja-----

/*
int poeni, ocenka=0;
printf("Vnesi broj na poeni\n");
scanf("%d", &poeni);
if(poeni < 0 || poeni > 100)
    printf("Nevalidna vrednost za poeni:\n");
else
    if(poeni > 90 ) ocenka = 10;
    else if(poeni > 80) ocenka =9;
    else if(poeni > 70) ocenka =8;
    else if(poeni > 60) ocenka =7;
    else if(poeni > 50) ocenka =6;
    else ocenka = 5;
    char znak = '';
    int pc = poeni % 10;
    if(ocenka != 5){
        if(pc >= 1 && pc <= 3) znak = '-';
        else if (ocenka != 10 && (pc >= 8 || pc <= 0))
            znak = '+';
    }
    printf("Ocenka %d%c\n", ocenka, znak);
*/


/*
float a, b, c;
printf("Vnesi dolzina na strani: \n");
scanf("%f%f%f", &a, &b, &c);
if((a + b <= c) || (a + c <= b) || (b + c <= a))
    printf("Ne moze da se konstruira triagolnik.\n");
else {
    if(a >= b){
        float tmp = a;
        a = b;
        b = tmp;
    }
    if(a >= c){
        float tmp = a;
        a = c;
        c = tmp;
    }
    if(b >= c){
        float tmp = b;
        b = c;
        c = tmp;
    }
    if(c * c == a * a + b * b){
        printf("Triagolnikot e pravoagolen.\n");
        printf("Plostinata mu e %.3f\n", a * b / 2);
    } else {
        printf("Triagolnikot ne e pravoagolen\n");
    }

}
*/

/*
float a, b, c;
printf("Vnesi dolzina na strani: \n");
scanf("%f%f%f", &a, &b, &c);
if((a + b <= c) || (a + c <= b) || (b + c <= a))
    printf("Ne moze da se konstruira triagolnik\n");
else{
    if (a == b && b == c)
        printf("Triagolnikot e ramnostran.\n");
    else if(a == b || a == c)
        printf("Triagolnikot e ramnokrak.\n");
    else
        printf("Triagolnikot e raznostran.\n");
    float p, s = (a + b + c) / 2; // formula za raznostran triagolnik
    p = sqrt (s * (s - a) * (s - b) * (s - c)); //formula za plostina na raznostran triagolnik
    printf("Plostinata na triagolnikot e %.2f:\n", p);
}
*/


//-----------------Strukturno 4------------------


/*
int i = 10, sum = 0;
printf("%d", i);
while (i <= 98) {   //presmetuvanje na sumata na parni dvocifreni brovi 10 + 12 + 14...
    printf(" + %d", i);
    sum = sum + i;
    i+=2;
}
    printf(" = %d\n", sum);
*/


/*
int i = 11, sum = 0;
sum = i;
i=i+2;
while (i <= 99) {     //presmetuvanje na sumata na neparni dvocifreni broevi 11 + 13...
    printf(" + %d", i);
    sum = sum + i;
    i+=2;
}
    printf(" = %d\n", sum);
*/


/*
int counter = 0, n;
float x, y = 1;
printf("x: ");
scanf("%f", &x);
printf("n: ");
scanf("%d", &n);
while (counter < n) {
    y *= x;
    counter++;
}
    printf("%.2f^%d = %f\n", x, n , y);
*/

/*
int n = 1, i = 0, broj, div, r1, r2;
div = r1 = r2 = 0; //brojaci
scanf("%d", &n); // kolku broevi ke bidat vneseni
while (i < n){
    scanf("%d", &broj);
    if(broj % 3 == 0)
        div++;
    else if (broj % 3 == 1)
        r1++;
    else r2++;
    i++;
}
printf("%d\n", div);
printf("%d\n", r1);
printf("%d\n", r2);
*/


/*
//SO FOR LOOP
int n = 1,i = 0, broj, div, r1, r2;
div = r1 = r2 = 0;
for(i = 0; i < n; i++){
    scanf("%d", &broj);
    if(broj % 3 == 0)
        div++;
    else if (broj % 3 == 1)
        r1++;
    else r2++;
}
printf("%d\n", div);
printf("%d\n", r1);
printf("%d\n", r2);
*/

/*
int n, max1, max2, temp;
if (scanf("%d%d", &max1, &max2) == 2) {
if (max2>max1){
temp = max1;
max1 = max2;
max2 = temp;
}
while(scanf("%d", &n)) {
if(n > max1){
max2 = max1;
max1 = n;
} else if (n>max2) {
max2 = n;
}
}
printf("%d\n", max1);
printf("%d\n", max2);
} else {
printf("Vnesete najmalku 2 broja");
}
*/


/*
char znak;
printf("Vnesi znak: ");
znak = getchar();//kako scanf("%c", &znak)

switch(znak) {  //moze i vaka
case 'a': case 'A':
case 'e': case 'E':
case 'i': case 'I':
case 'o': case 'O':
case 'u': case 'U':
    printf("Vnesena e samoglaskata: %c\n", znak);
    break;
case '0': // i vaka
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
    printf("Vnesena e cifrata: %c\n", znak);
    break;
default:// dava ako ne vneseme toa sto se bara
    printf("Vnesen e znakot: %c\n", znak);

}
*/

/*
char operacija;
float num1, num2, result = 0;
printf("num1 operator num2\n");
scanf("%f %c %f", &num1, &operacija, &num2);
switch(operacija){
case '+':
    result = num1 + num2;
    break;
case '-':
    result = num1 - num2;
    break;
case '*':
    result = num1 * num2;
    break;
case '/':
    if(num2 == 0){ //ova e ako se deli so 0
        printf("Delenje so 0\n");
    } else {
        result = num1/num2;
    }
    result = num1 / num2;
    break;
    printf("Izrazot e tocen");
default:
    printf("Nepoznat operator %c\n", operacija);
    break;
}
if(result)
    printf("%.2f %c %.2f = %f", num1, operacija, num2, result);
*/

/*
int ocena, br_oceni = 0, suma = 0, padnal = 0;
while (scanf("%d", &ocena) == 1){
    switch(ocena){
        case 6:
        case 7:
        case 8:
        case 9:
        case 10: suma += ocena;
                 br_oceni++; break;
                 padnal++; break;
        case 5:
            default:printf("Vnesi ocena od 5 do 10: ");
                    break;
    }
}

if(br_oceni == 0)
{
    printf("Nema polozeno ispiti");
}
else
    printf("Prosekot e %.2f\n", (float)suma / br_oceni);
if(padnal != 0)
    printf("Padnal na %d ispiti", padnal);
else
    printf("Ne padnal na nieden ispit\n");
*/


//primer za realizacija na tekst meni

/*
int vrednost, izbor;
printf("Vnesi pocetna vrednost: ");
scanf("%d", &vrednost);

do {
    do {
        printf("Meni:\n");
        printf("1 - zgolemi za 1\n");
        printf("2 - namali za 1\n");
        printf("3 - dupliraj\n");
        printf("0 - kraj:\n");
        printf("Izbor: ");
        scanf("%d", &izbor);
    } while((izbor < 0) || (izbor > 3));
    switch(izbor) {
    case 1:vrednost ++;
        break;
    case 2:vrednost --;
        break;
    case 3:vrednost *= 2;
        break;
    case 0:
        printf("Kraj\n");
        break;
    default:
        printf("Nevaliden izbor:\n");
        break;
    }
    printf("Vrednost = %d\n", vrednost);
}
while(izbor != 0);
*/

//-------------------Strukturno 5 (nizi)-------------------

/*
int n1, n2, element, i;
int a[MAX], b[MAX];
printf("Golemina na prvata niza: ");
scanf("%d", &n1);
printf("Golemina na vtorata niza: ");
scanf("%d", &n2);
if(n1 != n2)
    printf("Nizite ne se ednakvi\n");
else
    printf("Elementite na prvata niza: \n");
    for(i = 0; i < n1; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Elementite na vtorata niza: \n");
    for(i = 0; i < n2; i++){
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n1; i++)
        if(a[i] != b[i])
        break;
    if(i == n1)
        printf("Nizite se ednakvi\n");
    else
        printf("Nizite ne se ednakvi\n");
*/

/*
int i, n, a[MAX], br_neparni, br_parni, suma_neparni, suma_parni;
printf("Vnesi elementi na niza: \n");
scanf("%d", &n);
for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
for(i = 0; i < n; i++){
    if (a[i] % 2) {
        br_neparni++;
        suma_neparni += a[i];
    } else {
        br_neparni++;
        suma_parni += a[i];
    }
}

printf("Suma parni: %d\nSuma neparni: %d\n", suma_parni, suma_neparni);
printf("Odnos: %.2f\n", (float)br_parni / br_neparni);
*/

/*
int a[MAX], b[MAX], i, n, scalar = 0;
scanf("%d", &n);
for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
for(i = 0; i < n; i++)
    scanf("%d", &b[i]);
for(i = 0; i < n; i++)
    scalar += a[i] * b[i];
    printf("Skalarniot proizvod e %d\n", scalar);
*/

/*
int a[MAX][MAX], i, n, m, j, sum_koloni = 0, sum_redici = 0;
scanf("%d%d",&n, &m);
for(i = 0;i < n; ++i)
    for(j = 0; j < m; ++j)
        scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
    for(j = 0; j < m; ++j){
        if((j+1)%2)
            sum_koloni += a[i][j];
        if(!((i+1) % 2))
           sum_redici += a[i][j];
    }
    printf("%d", sum_koloni - sum_redici);
*/

//int a[MAX][MAX],i, n, j, m, simetricna = 1;
//scanf("%d%d", &n, &m);
//for(i = 0; i < n; ++i)
//    for(j = 0; j < m; ++j)
//    scanf("%d", &a[i][j]);
//for(i = 0; i < n - 1; ++i){
//        for(j = i + 1;j < n; ++j)
//        if(a[i][j] != a[j][i]){
//            simetricna = 0;
//            break;
//        }
//        if(simetricna)break;
//    }
//    if(!simetricna) break;
//}
//if(simetricna)
//    printf("Matricata e SIMETRICNA vo odnos na glavnata dijagonala");
//else
//    printf("Matricata ne e SIMETRICNA vo odnos na glavnata dijagonala);



    return 0;
}

