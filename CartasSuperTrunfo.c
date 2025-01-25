#include <stdio.h>

int main() {
    
float habitantes;
float area;
float PIB;
float turismo;
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

printf("Informe a população da cidade A01: \n");
scanf("%f", &habitantes);



    return 0;
}
