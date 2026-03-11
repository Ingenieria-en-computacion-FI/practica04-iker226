#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 1 */
Nodo* crearNodo(int valor){
    Nodo* nuevo=NULL;
    nuevo=(Nodo*)malloc(sizeof(Nodo));
    if(nuevo!=NULL){
        nuevo->dato= valor;
        nuevo->siguiente= NULL;
    }
    return nuevo;
}

/* Ejercicio 2 */
Nodo* crearArregloNodos(int n){
    Nodo* arreglo= NULL;
    arreglo=(Nodo*)calloc(n, sizeof(Nodo));
    return arreglo;
}

/* Ejercicio 3 */
Nodo* agregarNodo(Nodo* arreglo, int* n, int valor){
    Nodo* nuevo= NULL;
    nuevo=(Nodo*)realloc(arreglo, (*n+1)* sizeof(Nodo));
    if(nuevo!=NULL){
        nuevo[*n].dato= valor;
        nuevo[*n].siguiente= NULL;
        (*n)++;
    }
    return nuevo;
}

/* Ejercicio 4 */
void liberarNodos(Nodo* arreglo, int n){
    free(arreglo);
}

/* Ejercicio 5 */
Nodo* construirTresNodos(){
    Nodo* inicio=NULL;
    Nodo* n1 = (Nodo*)malloc(sizeof(Nodo));
    Nodo* n2 = (Nodo*)malloc(sizeof(Nodo));
    Nodo* n3 = (Nodo*)malloc(sizeof(Nodo));
    if(n1 && n2 && n3){
        n1->dato = 1;
        n2->dato = 2;
        n3->dato = 3;
        n1->siguiente = n2;
        n2->siguiente = n3;
        n3->siguiente = NULL;
        inicio = n1;
    }
    return inicio;
}

/* Ejercicio 6 */
int contarNodos(Nodo* inicio){
    int contador = 0;
    Nodo* actual = inicio;
    while(actual!=NULL){
        contador++;
        actual = actual->siguiente;
    }
    return contador;
}

/* Ejercicio 7 */
Nodo* crearNodosPorEntrada(){
    Nodo* inicio = NULL;
    Nodo* ultimo = NULL;
    int num;
    while(1){
        scanf("%d", &num);
        if(num==0)
         break;
        Nodo* nuevo = crearNodo(num);
        if(inicio==NULL){
            inicio=nuevo;
            ultimo=nuevo;
        }else{
            ultimo->siguiente=nuevo;
            ultimo=nuevo;
        }
    }
    return inicio;
}
