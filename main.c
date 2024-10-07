#include <stdio.h>
int main() {
    int nProdotti, i;
    float costo, totale;
    totale = 0;
    i = 1;
    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &nProdotti);
    if (nProdotti <= 0) {
        printf("Il numero di prodotti deve essere maggiore di zero.\n");
        return 0;
    }
    while (i <= nProdotti) {
        printf("Inserisci il costo del prodotto %d: ", i);
        scanf("%f", &costo);
        totale += costo;
        i++;
    }
    printf("Il totale speso e': %f\n", totale);
    return 0;
}