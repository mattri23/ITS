#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>

int main()
{
    /*
    int n;
    printf("num test \n");
    scanf_s("%i", &n);
    for (int i = 1; i <= n; i++) {
        printf("%i\n", i*n);
    }
    

    char line [15] = "pippo";
    printf("stringa -> ");
    scanf("%s", &line, 15);
    printf("%s", line);
    */

    /*int anno;
    while (true){
        printf("inserisci un anno\n");
        scanf("%d", &anno);
        (anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0)) 
            ? printf("%d e' bisestile\n", anno) 
            : printf("%d anno non bisestile\n", anno);
    }*/


    //chiedi 5 num, ritorna valore minore, maggiore, media dei valori
    /*
    int num, min = INT_MAX, max = INT_MIN;
    float sum = 0;
    for (int i = 0; i < 5; i++){
        printf("inserisci un numero\n");
        scanf("%d", &num);
        sum += num;
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }
    printf("il numero maggiore e': %d\n il numero minore e': %d\n la media e': %.2f\n", max, min, (sum / 5));
    */



    //input 2 caratteri, chi viene prima in ordine alfabetico

    
    char c1, c2;
    printf("inserisci il primo carattere\n");
    scanf(" %c", &c1);
    printf("inserisci il secondo carattere\n");
    scanf(" %c", &c2);
    if (c1 < 'a')
        c1 = c1 - 'A' + 'a';
    if (c2 < 'a')
        c2 = c2 - 'A' + 'a';
    if (c1 < 'a' || c1 > 'z' || c2 < 'a' || c2 > 'z')
    {
        printf("il carattere non corrisponde con una lettera");
        return 1;
    }
    switch (c1 < c2) {
    case true:
        printf("%c viene prima alfabeticamente", c1);
        break;
    case false:
        printf("%c viene prima alfabeticamente", c2);
        break;
    }
    

    

    //risolvi le equazioni di secondo grado

    /*int a, b, c, x1, x2;
    printf("inserisci a\n");
    scanf("%d", &a);
    printf("inserisci b\n");
    scanf("%d", &b);
    printf("inserisci c\n");
    scanf("%d", &c);
    float d = (pow(b, 2) - (4 * a * c));
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %d\nx2 = %d", x1, x2);
    }
    else printf("delta minore di 0");
    */
}

