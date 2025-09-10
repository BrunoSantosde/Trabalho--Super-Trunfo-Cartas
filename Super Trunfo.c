#include <stdio.h>
int main(){
//Acabei criando primeiro as variantes.
    float área1, pib1, área2, pib2;
    int pontos1, pontos2;
    char estado1[10], estado2[10], cidade1[50], cidade2[50];
    char codigo1[4], codigo2[4];

    unsigned long int população1, população2;
    
  //Então o processo para armazenar as informações.
printf("Para seguir vamos montar duas cartas onde seu tema é países. Complete as informações\n");
printf("Qual é a área:");
scanf("%f", &área1);
printf("Qual é a população:");
scanf("%lu", &população1);
printf("Qual é o PIB:");
scanf("%f", &pib1);
printf("Qual a quantidade de números pontos turísticos:");
scanf("%d", &pontos1);
printf("Estado da carta de A a H:");
scanf("%s", estado1);
printf("Qual o codigo da carta de 01 a 04:");
scanf("%s", codigo1);
printf("Para finalizar a primeira carta, qual seria o nome da cidade:");
scanf("%s", cidade1);

//Nesse momento a primeira carta estava pronta, então comecei armazenar a segunda carta.
printf("Agora vamos seguir para a segunda carta\n");
printf("Qual é a área:");
scanf("%f", &área2);
printf("Qual é a população:");
scanf("%lu", &população2);
printf("Qual é o PIB:");
scanf("%f", &pib2);
printf("Qual a quantidade de números pontos turísticos:");
scanf("%d", &pontos2);
printf("Estado da carta de A a H:");
scanf("%s", estado2);
printf("Qual o codigo da carta de 01 a 04:");
scanf("%s", codigo2);
printf("Para finalizar a segunda carta, qual seria o nome da cidade:");
scanf("%s", cidade2);
//Agora com os dados salvos, fiz um codigo para eles serem apresentados 
//Aproveitando segui para o nivel aventureiro 
float densidade1, densidade2, capital1, capital2;// Aqui acabei criando novas variáveis para armazenar os novos dados.
densidade1 = (float)população1 / área1;
densidade2 =  (float) população2 / área2;
capital1 = (float) pib1 / população1;
capital2 = (float) pib2 / população2;
printf("A primeira carta:\n");
printf("Cidade:%s\n Estado:%s\n Codigo:%s%s\n Área:%f\n População:%lu\n PIB:%f\n Pontos turísticos:%d\n Densidade Populacional:%f\n PIB per Capita:%f\n", cidade1, estado1, estado1, codigo1, área1, população1, pib1, pontos1, densidade1, capital1);
printf("Sua segunda carta:\n Cidade:%s\n Estado:%s\n Codigo:%s%s\n Área:%f\n População:%lu\n PIB:%f\n Pontos turísticos:%d\n Densidade Populacional:%f\n PIB per Capita:%f\n",cidade2, estado2, estado2, codigo2, área2, população2, pib2, pontos2, densidade2, capital2);
//Entrando agora no nível mestre
// Cálculo e comparação do Super Poder
    float densidade_invertida1 = 1 / densidade1;
    float densidade_invertida2 = 1 / densidade2;
float super_poder1 = (float)população1 + área1 + pib1 + pontos1 + capital1 + densidade_invertida1;
float super_poder2 = (float)população2 + área2 + pib2 + pontos2 + capital2 + densidade_invertida2;

printf("Comparação de Cartas:\n");
printf("Área:%d\n", área1 > área1);
printf("População:%d\n", população1 > população2);
printf("PIB:%d\n", pib1 > pib2);
printf("Pontos Turísticos:%d\n", pontos1 > pontos2);
// Comparação de Densidade Populacional (menor valor vence)
printf("Densidade Populacional:%d\n", densidade1 < densidade2);
printf("PIB por Capita:%d\n", capital1 > capital2);
printf("Super Poder:%d\n", super_poder1 > super_poder2);

//Projeto finalizado.

}
