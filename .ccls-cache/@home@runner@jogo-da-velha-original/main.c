#include <stdbool.h>

void imprimirTabuleiro(int tabuleiro[3][3]) {
  // X | X | X
  //---|---|---
  // X | X | X
  //---|---|---
  // X | X | X

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      char simbolo = ' ';

      switch (tabuleiro[i][j]) {
      case 0:
        simbolo = ' ';
        break;
      case 1:
        simbolo = 'X';
        break;
      case 2:
        simbolo = 'O';
        break;
      default:
        simbolo = '!';
        break;
      }
      if (j < 2)
        printf(" %c |", simbolo);
      else
        printf(" %c ", simbolo);
    }
    printf("\n");

    if (i < 2) {
      printf("---|---|---");
      printf("\n");
    }
  }
}

int entrada1(int tabuleiro[3][3]) {
  int a, b;
  int cont;
  int i;
  for(i=0;i<=cont;i++){
    cont++;
    printf("\nDigite a linha e a coluna:");
    scanf("%d %d", &a, &b);
    a = a - 1;
    b = b - 1;
    if ((a <= 2) && (a >=0)){
      if ((b <= 2) && ( b >=0)){
        break;
      }
    }
  }
  return tabuleiro[a][b] = 1;
}

int entrada2(int tabuleiro[3][3]) {
  int a, b;
  int cont;
  int i;
  for(i=0;i<=cont;i++){
    cont++;
    printf("\nDigite a linha e a coluna:");
    scanf("%d %d", &a, &b);
    a = a - 1;
    b = b - 1;
    if ((a <= 2) && (a >=0)){
      if ((b <= 2) && ( b >=0)){
        break;
      }
    }
  }
  return tabuleiro[a][b] = 2;
}

int main() {
  int tabuleiro[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  while(true){
    imprimirTabuleiro(tabuleiro);
    entrada1(tabuleiro);
    imprimirTabuleiro(tabuleiro);
    entrada2(tabuleiro);
  }
}