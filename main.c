#include <stdio.h>

int main(void) {
  float B1, B2, PF, MEDIA;
  printf("Nota [0.0, 10.0] - 1° BIMESTRE: "); scanf("%f", &B1);
  printf("Nota [0.0, 10.0] - 2° BIMESTRE: "); scanf("%f", &B2);

  if(B1 < 0 || B1 > 10 || B2 < 0 || B2 > 10)
    printf("ERRO: Dados de entrada.\n");
  else{
    MEDIA = (B1 + B2) / 2;
    printf("MÉDIA PARCIAL: %.1f\n", MEDIA);
    if(MEDIA < 3.0)
      printf("STATUS: REPROVAÇÃO\n");
    else if(MEDIA < 7.0){
      printf("Nota [0.0, 10.0] - PROVA FINAL: "); scanf("%f", &PF);
      if(PF < 0.0 || PF > 10.0)
        printf("ERRO: Dados de entrada.\n");
      else{
        printf("STATUS: PROVA FINAL\n");
        MEDIA = (MEDIA + PF) / 2;
        printf("MÉDIA SEMESTRAL: %.1f\n", MEDIA);
        if(MEDIA < 5.0)
          printf("STATUS: REPROVAÇÃO\n");
        else
          printf("STATUS: APROVAÇÃO\n");
      }
    }
    else
      printf("STATUS: APROVAÇÃO\n");
  }
  return 0;
}