#include <stdio.h>

int main() {
    
float habitantes;
float area;
float PIB;
int turismo;
char nome [50];
int cidade;
int estado;

  printf("Digite o nome do seu país: \n");
  scanf("%s", &nome);

  printf("Digite seu número de estados: \n");
  scanf("%d", &estado);   
    
printf("Digite o numero de cidades de cada estado: \n");
  scanf("%d", &cidade); 

printf("Vamos começar com o estado A... \n");

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
scanf("%f", &habitantes);

printf("Informe Área da cidade A02: \n");
scanf("%f", &area);

printf("Informe o PIB da cidade A02: \n");
scanf("%f", &PIB);

printf("Informe a quantidade de pontos turisticos da cidade A02: \n");
scanf("%d", &turismo);

printf("Vamos para a cidade A03: \n");

printf("Informe a População da cidade A03 : \n");
scanf("%f", &habitantes);

printf("Informe Área da cidade A03: \n");
scanf("%f", &area);

printf("Informe o PIB da cidade A03: \n");
scanf("%f", &PIB);

printf("Informe a quantidade de pontos turisticos da cidade A03: \n");
scanf("%d", &turismo);

printf("Vamos para a cidade A04: \n");

printf("Informe a População da cidade A04 : \n");
scanf("%f", &habitantes);

printf("Informe Área da cidade A04: \n");
scanf("%f", &area);

printf("Informe o PIB da cidade A04: \n");
scanf("%f", &PIB);

printf("Informe a quantidade de pontos turisticos da cidade A04: \n");
scanf("%d", &turismo);
printf("\n");

printf("Cidade A01: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes, area, PIB, turismo);
printf("\n");



printf("Cidade A02: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes, area, PIB, turismo);
printf("\n");


printf("Cidade A03: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes, area, PIB, turismo);
printf("\n");


printf("Cidade A04: População %f - Área %f - PIB %f - Ponto(s) Turisticos(s) %d. \n", habitantes, area, PIB, turismo);




    return 0;
}
