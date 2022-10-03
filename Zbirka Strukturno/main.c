#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
//KOMPLEKSNI ZADACI(POCETOK - PLAVA ZBIRKA STRUKTURNO)
//----------------------1---------------------------
//    int pogolem, pomal;
//    printf("Vnesi dva broja:\n");
//    scanf("%d %d", &pogolem, &pomal);
//    if(pogolem <= 0 || pomal <= 0){
//        printf("Invalid input\n");
//        return -1;
//    }
//    int tmp;
//    if(pomal>pogolem){
//        tmp=pogolem;
//        pogolem = pomal;
//        pomal = tmp;
//    }
//    int flag=0;
//    while(pomal){
//        if(pomal%10!=pogolem%10){flag = 1; printf("NE");break;}
//        pomal = pomal/10;
//        pogolem = pogolem/100;
//    }
//    if(flag==0) printf("DA");


//-------------------------2-----------------------
/*int proveri(int prv_broj, vtor_broj){
    if(prv == 0) return 0;
    if(prv == vtor) return 1;
    else return proveri(prv/vtor, vtor);

}
int main()
{
    printf("Vnesi dva broja:\n")
    int prv_broj, vtor_broj;
    scanf("%d %d", &prv_broj, &vtor_broj);
    int x=proveri(prv, vtor);
    if(x==1)
        printf("DA");
    else printf("NE");
}
*/
//----------------------3----------------------
//gore se dopisuva #define MAX 10(najmnogu 10x10)
//matrici
/*
int n, m, j, i;
int a[MAX][MAX], b[MAX][MAX];
printf("Vnesete go brojot na redici, pa brojot na koloni na matricata:\n");
scanf("%d %d", &m, &n);
printf("Vnesete ja matricata:\n");
for(i = 0; i < m; i++)
    for(j = 0; j < n; ++j)
scanf("%d", &a[i][j]);

int zbir=0;
for(i = 0; i < n; i ++)
    zbir += a[0][i];
for(i = 0; i < n; i++)
    zbir += a[m-1][i];
for(i = 0;i < m; i++)
    zbir += a[i][0];
for(i = 0; i < m; i++)
    zbir += a[i][n-1];
printf("%d\n", zbir);
//do tuka e prvata matrica (Se sobiraat site broevi)

printf("Vnesete go brojot na redici, pa brojot na koloni na VTORATA matrica:\n");
scanf("%d%d", &m, &n);
printf("Vnesete ja matricata:\n");
for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    scanf("%d", &b[i][j]);

int zbir1=0;
for(i = 0; i < n; i++)
    zbir1 += b[0][i];
for(i = 0; i < n; i++)
    zbir1 += b[m-1][i];
for(i = 0; i < m; i++)
    zbir1 += b[i][0];
for(i = 0;i < m; i++)
    zbir1 += b[i][n-1];
printf("%d\n", zbir1);
// do tuka e vtorata matrica

//preku if statement kazuvame koja matrica ima pogolem zbir
if(zbir > zbir1) {
    printf("Prvata matrica ima pogolem zbir\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d\n", a[i][j]);
        printf("\n");
    }

}
else {
    printf("Vtorata matrica ima pogolem zbir\n");
    for(i = 0; i < m;i++){
        for(j = 0; j < n; j++)
            printf("%d\n", b[i][j]);
        printf("\n");
    }
    }
*/

//----------------------------4---------------------
/*
int max(int a, int b, int c)
{
    if(a >= b && a >=c){
        return a;
    }
    if(a < b){
       return max(b,a,c);
    }
    if(a < c){
        return max(c, b, a);
    }

}

int main()
{
    int N, x, y, z, maximum;
    scanf("%d", &N);
    for(i=0;i<N;i++)
        scanf("%d%d%d", &x, &y, &z);
        maximum = max(x,y,z);
        printf("%d\n", maximum);
}
*/

//---------------------5----------------
//matrici

/*
int n, m, i, j, a[MAX][MAX];
printf("Vnesete gi dimenziite na matricata: \n");
scanf("%d%d", &n, &m);
printf("Vnesete ja matricata: \n");
for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    scanf("%d", &a[i][j]);

    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
        printf("%d", a[i][j]);
        printf("\n");
    }
    int sumi[MAX];
    int suma = 0, pom;
    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
        suma += a[i][j];
        sumi[i] = suma;
        suma = 0;
    }
    for(i = 0; i < m/2; i++){
        for(j = 0; j < n; j++);{

            if(sumi[i] > sumi[m-i-1]){

                pom = a[i][j];
                a[i][j] = a[m-1-i][j];
                a[m-1-i][j]=pom;
            }
        }
    }
    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            printf("%d", a[i][j]);
            printf("\n");
    }

*/

//--------------------6----------------------
//matrica

/*
int i, j, n, a[MAX][MAX];
printf("Vnesi dimenzii na matrica:\n");
scanf("%d", &n);

printf("Vnesete ja matricata:\n");
for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
    scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++){
        for(j = 0; j < n;j++)
    printf("%d", a[i][j]);
    printf("\n");
    }

    int sreden_element;
    for(i = 0; i < n;i++){
        for(j = 0; j < n; j++){
        if(i+j==n-1){
            if(i==j) sreden_element = a[i][j];
        }
    }
    }
    int suma = 0, k, l;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i+j==n-1){

                    if(j==0 && i == (n-1)||(i==j))
                        a[i][j]=sreden_element;
                    else {
                        for(k=i+1;k < n; k++)
                        for(i = 0; i < n;i++){
                            if(k+1==n-1)
                                suma += a[i][j];
                        }
                        a[i][j]=suma;
                        suma = 0;
                    }
                }
            }
            }
for(i = 0; i < n; i++){
    for(j = 0; j < n; j++)
    printf("%d", a[i][j]);
    printf("\n");
}
*/

//------------------------7----------------
//matrica

/*
int n,m,i,j,a[MAX][MAX];
printf("Vnesete ja dimenzijata na matricata:\n");
scanf("%d%d", &m, &n);
printf("Vnesete ja matricata:\n");
for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
        scanf("%d", &a[i][j]);

for(i = 0; i < m;i++){
    for(j = 0; j < n; j++)
    printf("%d", a[i][j]);
    printf("\n");
}

printf("\n");
int suma = 0,  br = 0;
    for(i = 0; i < m; i ++)
        for(j = 0; j < n; i++)
    {
        if((i > j) && (i+j>n-1)){
            suma += a[i][j];
            br++;
        }
    }
    float sredna = suma/br;
    printf("Srednata vrednost na elementite koi se naogaat istovremeno pod glavnata i pod sprorednata dijagonala e %.2f\n", sredna);

*/

//-------------------------8---------------------
//matrica

/*
int i, j, n, a[MAX][MAX];
printf("Vnesete dimenzii na matricata:\n");
scanf("%d", &n);
printf("Vnesi ja matricata:\n");
for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
        scanf("%d", &a[i][j]);

    int suma = 0;
    for(i = 0; i < n; i++)
        for(j = 0; j<n; j++)
            suma+=a[i][j];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        if(i > j) a[i][j]=suma;

    for(i = 0; i < n; i++){
        for(j = 0;j < n; j++)
            printf("%d", a[i][j]);
            printf("\n");
    }
*/

//------------------------9-----------------
//matrica

/*
int i, j, n, m, a[MAX][MAX];
printf("Vnesete gi dimenziite na matricata:\n");
scanf("%d%d", &m, &n);
printf("Vnesi ja matricata:\n");
for(i = 0; i < m; i++)
    for(j = 0; j < n; j++)
    scanf("%d", &a[i][j]);

    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++)
            printf("%d", a[i][j]);
            printf("\n");
    }
    printf("\n");
    int max_i = 0, max_j = 0, max=a[MAX][MAX];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
    {

    if(a[i][j] > max){
        max = a[i][j];
        max_i=i;
        max_j=j;
    }
}

int suma = 0;
for(j = 0; j < n; j++)
    suma+=a[max_i][j];
    a[max_i][max_j]=suma;

    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++)
            printf("%d", a[i][j]);
            printf("\n");
    }
*/



    return 0;
}
