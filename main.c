#include <stdio.h>

float calcolaSpese(float peso, int distanza, int urgenza) {
    float costoPerKg;
    if (distanza <= 100) {
        if (urgenza == 0) {
            costoPerKg = 1.0;
        } else {
            costoPerKg = 2.5;
        }
    } else if (distanza <= 300) {
        if (urgenza == 0) {
            costoPerKg = 2.0;
        } else {
            costoPerKg = 3.0;
        }
    } else {
        if (urgenza == 0) {
            costoPerKg = 3.5;
        } else {
            costoPerKg = 4.0;
        }
    }
    return costoPerKg * peso;
}
int main() {
    float peso;
    int distanza, urgenza;
    printf("Inserisci il peso del pacco (kg): ");
    scanf("%f", &peso);
    printf("Inserisci la distanza (km): ");
    scanf("%d", &distanza);
    printf("Inserisci il livello di urgenza (0 = non urgente, 1 = urgente): ");
    scanf("%d", &urgenza);
    float spese = calcolaSpese(peso, distanza, urgenza);
    printf("Le spese di spedizione sono: %.2f euro\n", spese);

    return 0;
}
