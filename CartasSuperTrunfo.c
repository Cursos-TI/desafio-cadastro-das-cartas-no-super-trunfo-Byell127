#include <stdio.h>

int main() {
    
float habitantes;
float area;
float PIB;
int turismo;
char nome [50];

float habitantes2;
float area2;
float PIB2;
int turismo2;

float habitantes3;
float area3;
float PIB3;
int turismo3;

float habitantes4;
float area4;
float PIB4;
int turismo4;

  printf("Digite o nome do seu país: \n");
  scanf("%s", &nome);

  printf("Seu país tem 8 estados com cada um obtendo 4 cidades. \n");
  printf("\n");
    
printf("Vamos começar com o estado A... \n");
printf("\n");

printf("Informe a População da cidade A01: \n");
scanf("%f", &habitantes);

printf("Informe Área da cidade A01: \n");
scanf("%f", &area);

printf("Informe o PIB da cidade A01: \n");
scanf("%f", &PIB);

printf("Informe a quantidade de pontos turisticos da cidade A01: \n");
scanf("%d", &turismo);

printf("Vamos para a cidade A02: \n");

printf("Informe a População da cidade A02 : \n");
scanf("%f", &habitantes2);

printf("Informe Área da cidade A02: \n");
scanf("%f", &area2);

printf("Informe o PIB da cidade A02: \n");
scanf("%f", &PIB2);

printf("Informe a quantidade de pontos turisticos da cidade A02: \n");
scanf("%d", &turismo2);

printf("Vamos para a cidade A03: \n");

printf("Informe a População da cidade A03 : \n");
scanf("%f", &habitantes3);

printf("Informe Área da cidade A03: \n");
scanf("%f", &area3);

printf("Informe o PIB da cidade A03: \n");
scanf("%f", &PIB3);

printf("Informe a quantidade de pontos turisticos da cidade A03: \n");
scanf("%d", &turismo3);

printf("Vamos para a cidade A04: \n");

printf("Informe a População da cidade A04 : \n");
scanf("%f", &habitantes4);

printf("Informe Área da cidade A04: \n");
scanf("%f", &area4);

printf("Informe o PIB da cidade A04: \n");
scanf("%f", &PIB4);

printf("Informe a quantidade de pontos turisticos da cidade A04: \n");
scanf("%d", &turismo4);
printf("\n");

printf("Cidade A01: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes, area, PIB, turismo);
printf("\n");



printf("Cidade A02: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes2, area2, PIB2, turismo2);
printf("\n");


printf("Cidade A03: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes3, area3, PIB3, turismo3);
printf("\n");


printf("Cidade A04: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes4, area4, PIB4, turismo4);




    return 0;
}
