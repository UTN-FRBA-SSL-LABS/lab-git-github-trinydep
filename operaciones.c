#include "operaciones.h"

// Función sumar mejorada con const
int sumar(const int a, const int b) {
    return a + b;
}

int restar(const int a, const int b) {
    return a - b;
}

// Función multiplicar mejorada con const
int multiplicar(const int a, const int b) {
    return a * b;
}

int esPar(int n) {
    return (n % 2) == 0; /* Equivalente a (n & 1) == 0 */
}
