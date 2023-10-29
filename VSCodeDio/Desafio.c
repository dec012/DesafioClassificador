#include <stdio.h>
#include<stdlib.h>

int main(){
    char name[256];
    int num;

    printf("Digite o nome do seu Herói: ");
    scanf("%s", name);
    printf("Digite o XP do seu Herói: ");
    scanf("%d", &num);
    
    char nivel[256];

     if (num < 1000){
        strcpy(nivel, "Ferro");
    } else if (num >= 1001 && num <= 2000){
        strcpy(nivel, "Bronze");
    } else if (num >= 2001 && num <= 6000){
        strcpy(nivel, "Prata");
    } else if (num >= 6001 && num <= 7000){
        strcpy(nivel, "Ouro");
    } else if (num >= 7001 && num <= 8000){
        strcpy(nivel, "Platina");
    } else if (num >= 8001 && num <= 9000){
        strcpy(nivel, "Ascendente");
    } else if (num >= 9001 && num <= 10000){
        strcpy(nivel, "Imortal");
    } else {
        strcpy(nivel, "Radiante");
    }

    printf("O Herói de nome: %s está no nível de: %s.\n", name, nivel);

    return 0;
}