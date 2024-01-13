#include<stdio.h>
typedef struct Complexe {
    int reel;
    int imginaire;
} Complexe;
double imag(Complexe z) {
    return z.imginaire;
}

double reel(Complexe z) {
    return z.reel;
}
Complexe mul(Complexe z1, Complexe z2) {
    Complexe pro;
    pro.reel = (reel(z1) * reel(z2) - imag(z1) * imag(z2));
    pro.imginaire = (reel(z1) * imag(z2) + imag(z1) * reel(z2));
    return pro;
}
int main() {
    Complexe z1, z2, k;

    printf("Donner la partie reelle de z1: ");
    scanf("%d", &z1.reel);

    printf("Donner la partie imaginaire de z1: ");
    scanf("%d", &z1.imginaire);

    printf("Donner la partie reelle de z2: ");
    scanf("%d", &z2.reel);

    printf("Donner la partie imaginaire de z2: ");
    scanf("%d", &z2.imginaire);

    printf("z1 = %.2lf + %.2lf i\n", reel(z1), imag(z1));
    printf("z2 = %.2lf + %.2lf i\n", reel(z2), imag(z2));

    k= mul(z1, z2);
    printf("z1 x z2 = %.2lf + %.2lf i", reel(k), imag(k));

    return 0;
}
