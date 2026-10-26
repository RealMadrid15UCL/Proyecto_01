//calculadora
#include<stdio.h>
main () {
//Variables para numeros

int numeroUno;
int numeroDos;

//Variables para operaciones

int suma;
int resta;
int multiplicacion;
int division;

//Pedir primer numero
printf("Calculadora PRO MAX\n");
printf("%d",&numeroUno);

//Pedir segundo numero
printf("Ingresar otro numero");
scanf("%d",&numeroDos);

//Operaciones

suma = numeroUno+numeroDos;
printf("El resultado de la suma es:%d", suma);

resta = numeroUno-numeroDos;
printf("El resultado de la resta es:%d", suma);

multiplicacion = numeroUno+numeroDos;
printf("El resultado de la division es:%d", multiplicacion);

division = numeroUno/numeroDos;
printf("El resultado de la division es:%d", division);
}
