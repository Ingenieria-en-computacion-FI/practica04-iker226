#include <stdio.h>
#include "nodo.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");

    // Ejercicio 1
    Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

    // Ejercicio 2
    Nodo* arreglo = crearArregloNodos(5);
    printf("Arreglo de nodo:\n");
    for(int i=0; i<5; i++){
        printf("%d ", arreglo[i].dato);
    }
    printf("\n ");

    // Ejercicio 3
    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    printf("Arreglo actualizado:\n");
    for(int i=0; i<tam; i++){
        printf("%d ", arreglo[i].dato);
    }
    printf("\n");

    // Ejercicio 4
    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    // Ejercicio 5
    Nodo* inicio = construirTresNodos();
    printf("Lista construida:\n");
    Nodo* actual=inicio;
    while(actual!=NULL){
        printf("%d -> ", actual->dato);
        actual=actual->siguiente;
    }
    printf("NULL\n");

    // Ejercicio 6
    int total = contarNodos(inicio);
    printf("Total de nodos: %d\n", total);

    // Ejercicio 7
    printf("Ingresa numeros para crear nodos por entrada(0 para terminar):\n");
    Nodo* desdeEntrada = crearNodosPorEntrada();
    printf("Lista de entrada:\n");
    actual=desdeEntrada;
    while(actual!=NULL){
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");

    return 0;
}
