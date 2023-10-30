#include <stdio.h>
#include <stdlib.h>

int main(){
    int vit;
    int der;

    printf("Digite quantas vitorias tem o seu Herói: ");
    scanf("%d",&vit);
    printf("Digite quantas derrotas teve o seu Herói: ");
    scanf("%d",&der);

    int saldo = vit - der;

    char nivel[256];

    switch (saldo) {
        case 0 ... 10:
            strcpy(nivel, "Ferro");
            break;
        case 11 ... 20:
            strcpy(nivel, "bronze");
            break;
        case 21 ... 50:
            strcpy(nivel, "Prata");
            break;
        case 51 ... 80:
            strcpy(nivel, "Ouro");
            break;
        case 81 ... 90:
            strcpy(nivel, "Diamante");
            break;
        case 91 ... 100:
            strcpy(nivel, "Lendario");
            break;
        default:
            strcpy(nivel, "Imortal");
            break;
    }

    printf("O Herói tem de saldo de %d está no nível de: %s\n", saldo, nivel);

return 0;

}