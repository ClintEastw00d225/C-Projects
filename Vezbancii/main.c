#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
//    char ch;
//    int rez;
//    printf("Vnesi znak od tastatura\n");
//    scanf("%c", &ch);
//    rez = (ch >= 'a') && (ch <= 'z')
//    printf("%d\n", rez);

//    int x=1, y=2, z=3, r;
//    r = (x<y || y<z++);
//    printf("r = %d,z = %d\n", r, z);
//
//    r = (x>y && y<z++)
//    printf("r = %d, z = %d\n", r, z)


//float cena;
//printf("Vnesi cena na prozivodot:");
//scanf("%f", &f);
//printf("Vkupnata cena na proizvodot e %.2f\n", cena * 1.18);


//float cena_proizvod, kamata, vkupna_suma, rata ;
//int br_rati;
//printf("Vnesi cena na proizvod: ");
//scanf("%f", &cena_proizvod);
//printf("Vnesete go brojot na rati: ");
//scanf("%d", &br_rati);
//printf("Vnesete ja kamatata: ");
//scanf("%f", &kamata);
//vkupno = cena * (1 + kamata / 100);
//rata = vkupno / br_rati;
//printf("Edna rata ke iznesuva: %.3f\n", rata);
//printf("Vkupnata isplatena suma ke bide %.3f\n", vkupna_suma);

//
//int broj;
//printf("Vnesi tricifren broj:\n");
//scanf("%d", &broj);
//printf("Najznacajna cifra e ");
//printf("%d, a najmalku znacajna e %d.\n", (broj / 100),
//       (broj % 10));
//

//long int datum;
//int den, mesec;
//printf("Vnesi datum na ragjanje:\n");
//scanf("%ld", &datum);
//den = datum / 1000000;
//mesec = (datum / 10000) % 100;
//printf("Denot i mesecot na raganje se %.2d %.2d\n", den, mesec);


//int a, b;
//printf("Vnesi 2 broja: \n");
//scanf("%d%d", &a, &b);
//if (a > b)
//    printf("Maximum: %d\n", a);
//else
//    printf("Minimum: %d\n", a);


//int godina;
//printf("Vnesi godina: \n");
//scanf("%d", &godina);
//if((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0)
//    printf("%d e prestapna\n", godina);
//else
//    printf("%d ne e prestapna\n", godina


//int poeni, ocenka=0;
//printf("Vnesi poeni: \n");
//scanf("%d", &poeni);
//if(poeni >= 0 && poeni <= 50) ocenka = 5;
//else if(poeni > 50 && poeni <= 60) ocenka = 6;
//else if(poeni > 60 && poeni <= 70) ocenka = 7;
//else if(poeni > 70 && poeni <= 80) ocenka = 8;
//else if(poeni > 80 && poeni <= 90) ocenka = 9;
//else if(poeni > 90 && poeni <= 100) ocenka = 10;
//printf("Ocenka %d\n", ocenka);
//


//int poeni, ocenka=0;
//printf("Vnesi poeni: \n");
//scanf("%d", &poeni);
//if(poeni >= 0 && poeni <= 50) ocenka = 5;
//else if(poeni > 50 && poeni <= 60) ocenka = 6;
//else if(poeni > 60 && poeni <= 70) ocenka = 7;
//else if(poeni > 70 && poeni <= 80) ocenka = 8;
//else if(poeni > 80 && poeni <= 90) ocenka = 9;
//else if(poeni > 90 && poeni <= 100) ocenka = 10;
//else printf("Nevalidna vrednost na poeni\n");
//printf("Ocenka %d\n", ocenka);

//-------------------------------------------------------vezbancii od prethodni----------------

//float cena_proizvod, vkupna_suma, rata, kamata;
//int br_rati;
//printf("Vnesi cena na proizvod: ");
//scanf("%f", &cena_proizvod);
//printf("Vnesete go brojot na rati: ");
//scanf("%f", &br_rati);
//printf("Vnesi ja kamata: ");
//scanf("%f", &kamata);
//vkupna_suma = cena_proizvod * (1 + kamata / 100);
//rata = vkupna_suma / br_rati;
//printf("Edna rata iznesuva %.3f\n",rata);
//printf("Celata suma iznesuva %.3f\n ",vkupna_suma );


//int broj;
//printf("Vnesete go brojot: ");
//scanf("%d", &broj);
//printf("Najznacajnata cifra e %d, a najmalku znacajnata e %d\n", (broj / 100), (broj % 10));


//char znak;
//int broj;
//printf("Vnesi znak od tastatura: ");
//scanf("%c", &znak);
//broj = (znak >= 'a') && (znak <= 'z');
//printf("%d\n", broj);


//int x,y,z;
//printf("Vnesi x i y:\n");
//scanf("%d%d", &x ,&z);
//z = x++ + --y + (x<y);
//printf("z = %d\n", z);


//int x=1, y=2, z=3, r;
//r = (x < y || y < z++);
//printf("r = %d, z = %d\n, r, z);
//r = (x > y && y < z++);
//printf("r = %d, z = %d\n", r, z)


//long int datum;
//int den, mesec;
//printf("Vnesete datum na ragjanje:\n");
//scanf("%d", &datum);
//den = datum / 1000000;
//mesec = (datum / 10000) % 100;
//printf("Denot i mesecot na ragjanje se %02d.%02d\n". den, mesec);
//
//


//float a,b,c;
//printf("Vnesi dolzini na strani:");
//scanf("%d%d%d", &a,&b,&c);
//if((a + b <= c) || (b + c <= a) || (c + a <= b))
//    printf("Ne moze da se konstruira triagolnik\n");
//else {
//    if(a >= b) {
//        float tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if(a >= c){
//        float tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if(b >= c){
//        float tmp = b;
//        b = c;
//        c = tmp;
//
//    }
//    if(c * c == a * a + b * b){
//        printf("Triagolnikot e pravoagolen\n");
//        printf("Plostinata mu e &7.3f\n", a * b / 2);
//    } else {
//        printf("Triagolnikot ne e pravoagolen\n");
//    }
//}



//float a,b,c;
//printf("Vnesi dolzini na strani:");
//scanf("%d%d%d", &a,&b,&c);
//if((a + b <= c) || (a + c <= b) || (b + c <= a))
//    printf("Ne moze da se konstruira triagolnik.\n");
//else {
//    if (a == b && b == c)
//        printf("Triagolnikot e ramnostran\n");
//    else if (a == b && b == c && a == c)
//        printf("Triagolnikot e ramnokrak\n");
//    else
//        printf("Triagolnikot e raznostran.\n");
//    float p, s = (a + b + c) / 2;
//    p = sqrt(s*(s - a)*(s - b)*(s - c));
//    printf("Plostinata na triagolnik e %.3f", p);
//}


//int i=10, sum=0;
//while(i <= 98){
//    sum = sum+i;
//    i+=2;
//}
//printf("%d\n", sum);


//int i=11, sum=0;
//printf("%d", i);
//sum=i;
//i=i+2;
//while(i <= 99){
//    printf(" + %d", i);
//    sum = sum+i;
//    i+=2;
//}
//    printf(" = %d\n", sum);


//int n=1, i=0, number, div, r1, r2;
//div = r1 = r2 = 0;
//printf("Vnesu")
//scanf("%d", &n);
//while(i < n){
//    scanf("%d", &number);
//    if(number % 3 == 0)
//        div++;
//    else if(number % 3 == 1)
//        r1++;
//    else r2++;
//        i++;
//
//}
//    printf("%d\n", div);
//    printf("%d\n", r1);
//    printf("%d\n", r2);


//int n=1, i=0, number, div, r1, r2;
//div = r1 = r2 = 0;
//scanf("%d", &n);
//for(i = 0; i < n; i++){
//    scanf("%d", &number);
//    if(number % 3 == 0)
//        div++;
//    else if(number % 3 == 1)
//        r1++;
//        else r2++;
//}
//    printf("%d\n", div);
//    printf("%d\n", r1);
//    printf("%d\n", r2);


//int i, from, to, temp, op, digit;
//scanf("%d %d", &from, &to);
//for(i = from; i <= to; i++){
//    temp = i;
//    op = 0;
//    while(temp > 0){
//        digit = temp % 0;
//        op = op * 10 / digit;
//        temp /= 10;
//    }
//    if(op == i) printf("%d\t", i);
//}

//int n, max;
//if(scanf("%d", &max))
//    while(scanf("%d, &n")){
//        if(max < n){
//            max=n;
//        }
//        printf("%d", max);
//} else {
//    printf("Ne e vnesen broj");
//}


//int godina;
//printf("Vnesi godina: \n");
//scanf("%d", &godina);
//if((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0 )
//    printf("%d e prestapna.\n", godina);
//else
//    printf("%d ne e prestapna", godina);


//char znak;
//printf("Vnesi znak: ");
//znak = getchar();
//
//switch(znak){
//case 'a': case 'A':
//case 'e': case 'E':
//case 'i': case 'I':
//case 'o': case 'O':
//case 'u': case 'U':
//    printf("Vnesena e samoglaskata: %c\n", znak);
//    break;
//case '0':
//case '1':
//case '2':
//case '3':
//case '4':
//case '5':
//case '6':
//case '7':
//case '8':
//case '9':
//    printf("Vnesena e cifrata %c\n", znak);
//    break;
//    default:
//    printf("Vnesen e znakot %c\n", znak);
//
//
//}

//char operator;
//float num1, num2, result = 0;
//printf("num1 operator num2\n");
//scanf("%f %c %f", &num1, &operator, &num2);
//switch(operator){
//case '+':
//    result = num1 + num2;
//    break;
//case '-':
//    result = num1 - num2;
//    break;
//case '*':
//    result = num1 * num2;
//    break;
//case '/':
//    if(num2 == 0){
//        printf("Delenje so 0\n");
//    } else {
//        result = num1 / num2;
//    }
//    break;
//default:
//    printf("Nepoznat operator %c\n", operator);
//    break;
//}
//    if(result)
//        printf("%.2f %c %.2f = %f", num1, operator, num2, result);

//int ocena, suma = 0, br_oceni = 0, padnal = 0;
//while(scanf("%d", &ocena) == 1) {
//    switch(ocena){
//case 6:
//case 7:
//case 8:
//case 9:
//case 10: suma += ocena;
//         br_oceni++; break;
//case 5: padnal++; break;
//default: printf("Vnesi ocena od 5 do 10: "); break;
//    }
//}
//if(br_oceni == 0)
//    printf("Nema polozeni ispiti");
//else
//    printf("Prosekot e %2.f\n", (float)suma/br_oceni);
//if(padnal != 0)
//    printf("Padnal na %d ispiti\n", padnal);
//else
//    printf("Ne padnal na nieden ispit\n");


//int n1, n2, elememnt, i;
//int a[MAX], b[MAX];
//printf("Golemina na prvata niza e: ");
//scanf("%d", &n1);
//printf("Golemina na vtorata niza e:")
//scanf("%d", &n2);
//if(n1 != n2)
//    printf("Nizite ne se ednakvi\n");
//else
//    printf("Elementi na prvata niza: \n");
//    for(i = 0; i < n1; i++) {
//        printf("a[%d] = ", i]
//        scanf("%d", &a[i]);
//    }
//    printf("Elementi na vtorata niza: \n");
//    for(i = 0; i < n2; i++){
//        printf("b[%d] = ", i);
//        scanf("%d", &b[i]);
//    }
//    for(i = 0; i < n1; i++)
//        if(a[i] != b[i])
//        break;
//    if(i == n1)
//        printf("Nizite se ednakvi\n");
//    else
//        printf("Nizite ne se ednakvi\n");
//


//int i, n, br_parni, br_neparni, a[MAX], suma_neparni, suma_parni;
//scanf("%d", &n);
//for(i = 0; i < n; i++)
//    scanf("%d", &a[i]);
//for(i = 0; i < n; i++)
//    if(a[i] % 2){
//        br_neparni++;
//        suma_neparni += a[i];
//} else {
//        br_parni++;
//        suma_parni += a[i]
//
//    }
//
//}
//
//printf("Suma parni: %d/nSuma neparni: %d/n");
//printf("Odnos: %.2f\n", (float)br_parni/br_neparni);
//

//int n, i, a[MAX], b[MAX], scalar = 0;
//scanf("%d", &n);
//for(i = 0; i < n; i++)
//    scanf("%d", &a[i]);
//for(i = 0; i < n; i++)
//    scanf("%d", &b[i]);
//for(i = 0; i < n; i++)
//    scalar += a[i] * b[i];
//printf("Skalarniot proizvod e: %d\n", scalar);


//int a[MAX][MAX], i, n, m, j, suma_koloni = 0, suma_redici = 0;
//scanf("%d %d", &n, &m);
//for(i = 0; i < n; i++)
//    for(j = 0; j < n; j++)
//    scanf("%d", &a[i][j]);
//
//for(i = 0; i < n; i++)
//    for(j = 0; j < m; j++) {
//    if((j + 1) % 2)
//        suma_koloni += a[i][j];
//        if(!((i + 1) % 2))
//            suma_redici += a[i][j];
//}
//printf("%d", suma_koloni - suma_redici);


//int a[MAX][MAX];
//int n, i, j, min, max;
//scanf("%d", &n);
//for(i = 0; i < n; i++)
//    for(j = 0; j < n; ++j){
//        scanf("%d", &a[i][j]);
//        if(i == 0 && j == 0){
//            min = max = a[i][j];
//        } else if (a[i][j] > max) {
//            max = a[i][j];
//        } else if (a[i][j] < min) {
//            min = a[i][j];
//        }
//
//    }
//
//}
//for (i = 0; i < n; ++i){
//    a[i][j] = max - min;
//}
//for (i = 0; i < n; ++i) {
//    for(j = 0; j < n; ++j) {
//        printf("%d\t", a[i][j]);
//    }
//    printf("\n");
//}

//int a[MAX][MAX];
//int n;
//scanf("%d", &n);
//int i, j, min = 0, max = 0;
//
//for (i = 0; i < n; ++i) {
//for (j = 0; j < n; ++j) {
//scanf("%d", &a[i][j]);
//if (i == 0 && j == 0) {
//min = max = a[i][j];
//} else if (a[i][j] > max) {
//max = a[i][j];
//} else if (a[i][j] < min) {
//min = a[i][j];
//}
//}
//}
//for (i = 0; i < n; ++i) {
//a[i][i] = max - min;
//}
//for (i = 0; i < n; ++i) {
//for (j = 0; j < n; ++j) {
//printf("%d\t", a[i][j]);
//}
//printf("\n");
//}


//int n, i, j, a[MAX][MAX], simetricna = 0;
//printf("Vnesete dimenzija na kvadratna matrica: \n");
//scanf("%d", &n);
//printf("Vnesete gi elementite: \n");
//for(i = 0; i < n; ++i)
//    for(j = 0; j < n; ++j)
//        scanf("%d", &a[i][j]);
//for(i = 0; i < n - 1; ++i){
//    for(j = i + 1; j < n; ++j)
//    if(a[i][j] != a[j][i]){
//        simetricna = 0;
//        break;
//    }
//    if(simetricna) break;
//}
//if(simetricna)
//    printf("Matricata e simetricna vo odnos na glavnata dijagonala\n");
//else
//    printf("Matricata ne e simetricna vo odnos na glavnata dijagonala\n");


return 0;
}
