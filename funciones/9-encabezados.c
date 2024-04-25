#include <stdio.h>
#include "9-encabezados.h"

int main() {
//Se declaro dos variables una v y otra x para la funcion 4. 
    int v,x,z;
    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    //Se llama ala cuarta funcion
    x = funcion4(10);
    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    // Imprime el valor que retornó funcion4()
    printf("x = %d\n", x);
    z = funcion5(10);
    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    printf("z = %d\n", z);
    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}
//Para el laboratorio 4 se añadio una cuarta funcion que lo que retorna es un valor que recibió como argumento 
//Se le resta dos al numero.
int funcion4(int x) {
    printf("En funcion4()...\n");
    int y = x + 2;
    return y;
}
int funcion5(int x) {
    printf("En funcion5()...\n");
    int y = x + 5;
    return y;
}
