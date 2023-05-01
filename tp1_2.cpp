/*4. Genere en el repositorio un archivo que se llame tp1_2.cpp y resuelva las
siguientes tareas mediante el uso de funciones:

*/
#include <stdio.h>
int cuadrado(int num);
void cuadrado2(int a);
void Invertir(int a, int b);
void orden(int a,int b);
int main(){
    int num=3;
    int num1Inv, num2Inv;

    printf("El cuadrado del número es %d \n", cuadrado(num));
    cuadrado2(num);
    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    printf("\nLa variable es: %d", num);
    printf("\nLa direccion de memoria de la variable es: %d\n", &num);
    printf("Ingrese los números a invertir:");
    scanf("%d %d",&num1Inv, &num2Inv);
    Invertir(num1Inv, num2Inv);
    orden(num1Inv, num2Inv);
    return 0; 
}
//a) Haga una función que devuelva el cuadrado de un número
int cuadrado(int a){
    return a*a;
}
//b) Haga la función anterior, pero devolviendo un tipo void
void cuadrado2(int a){
    printf("El cuadrado del número es %d", a*a);
}
/*d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a*/
void Invertir(int a, int b){
    printf("Los números en orden inverso son: %d %d", b, a);
}

/*
e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el 
menor y en el segundo el mayor. void orden(a,b) deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande
*/
void orden(int a,int b){
    if(a<b){
        printf("\nLos números ordenados son:%d %d", a, b);
    } else {
        printf("\nLos números ordenados son:%d %d", b, a);
    }
}
/*
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.*/