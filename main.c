#include <stdio.h>

int main() {

    float costoBiglietto;
    char categoria;

    printf("seleziona la tua categoria inserendo la lettera P = pensionato, S = studente, D = disoccupato:\n" );
    scanf("%c",&categoria);
    printf("inserisci il prezzo del biglietto:\n");
    scanf("%f",&costoBiglietto);



    switch(categoria){
        case 'P':
            costoBiglietto -= costoBiglietto * 0.1;
            printf("il prezzo scontato e' %.2f",costoBiglietto);
        break;

        case 'S':
            costoBiglietto -= costoBiglietto * 0.15;
            printf("il prezzo scontato e' %.2f",costoBiglietto);
            break;

        case 'D':
            costoBiglietto -= costoBiglietto * 0.25;
            printf("il prezzo scontato e' %.2f",costoBiglietto);
            break;

        default:
            printf("categoria non esistente nessuno sconto applicato, prezzo biglietto: %.2f",costoBiglietto);

    }
//il programma e' terminato
    return 0;
}
