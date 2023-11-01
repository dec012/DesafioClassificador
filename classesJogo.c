#include <stdio.h>

int main() {

  char name[256];
  int num;
  char tip[256];
  char valid_tips[] = "Warrior, Mage, Monk, Ninja";

  printf("Choose your name: ");
  scanf("%s", name);
  printf("Choose your age: ");
  scanf("%d", &num);

  // Valida a entrada do tipo de personagem
  do {
    printf("choose your Warrior, Mage, Monk or Ninja: ");
    scanf("%s", tip);
  } while (!strstr(valid_tips, tip));

  // Verifica o tipo de personagem
  switch (tip[0]) {
    case 'W':
      printf("O %s atacou com uma espada\n", tip);
      break;
    case 'M':
      printf("O %s atacou usando magia\n", tip);
      break;
    case 'N':
      printf("O %s atacou com shurikens\n", tip);
      break;
    case 'A':
      printf("O %s atacou com sua Arte Macial\n", tip);
      break;
    default:
      printf("Tipo de personagem inválido\n");
  }

  return 0;

}
