//cilindro
//leer el radio y la altura de un cilindro. Calcular y mostrar su area total, su volumen y su capacidad en litros
#include<stdio.h>
int main() {
float radio
float altura
float area
float volumen
float litro

//Pedir datos:
printf("Dame el radio:");
scanf("%f", &radio);

printf("Dame la altura:");
scanf("%f", &altura);

//operaciones
area=2*3.1416*radio*(radio+altura);
volumen=3.1416*radio*radio*altura;
litros=volumen/100;

//datos
printf("Area total=%.2f cm2\n",area);
printf("Volumen=%.2fcm3\n", vplumen);
printf("capacidad=%.2f litros\n", litros);
}
