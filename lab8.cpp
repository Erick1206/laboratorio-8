#include "lab8.h"

float calcularMedia(float arreglo[], int tamano) {
    float suma = 0;
    for (int i = 0; i < tamano; i++) {
        suma += arreglo[i];
    }
    return suma / tamano;
}

float calcularVarianza(float arreglo[], int tamano, float media) {
    float sumaDiferencias = 0;
    for (int i = 0; i < tamano; i++) {
        float dif = arreglo[i] - media;
        sumaDiferencias += dif * dif; 
    }
    return sumaDiferencias / tamano;
}


float calcularDesviacion(float varianza) {
    if (varianza == 0) return 0;
    
    float estimacion = varianza / 2.0; 
    
   
    for (int i = 0; i < 10; i++) {
        estimacion = (estimacion + (varianza / estimacion)) / 2.0;
    }
    return estimacion;
}

float calcularCurtosis(float arreglo[], int tamano, float media, float desviacion) {
    if (desviacion == 0) return 0; 
    float sumaCuarta = 0;
    for (int i = 0; i < tamano; i++) {
        float dif = arreglo[i] - media;
        sumaCuarta += dif * dif * dif * dif; 
    }
    float momento4 = sumaCuarta / tamano;
    
    
    float desviacionCuarta = desviacion * desviacion * desviacion * desviacion; 
    
    return momento4 / desviacionCuarta;
}

float obtenerMaximo(float arreglo[], int tamano) {
    float max = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
        }
    }
    return max;
}

float obtenerMinimo(float arreglo[], int tamano) {
    float min = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }
    return min;
}

// ejercicio 2 
float obtenerMaximoMatriz(float* matriz, int filas, int columnas) {
    float max = *matriz; 
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            float valor = *(matriz + (i * columnas) + j);
            if (valor > max) {
                max = valor;
            }
        }
    }
    return max;
}

float obtenerMinimoMatriz(float* matriz, int filas, int columnas) {
    float min = *matriz;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            float valor = *(matriz + (i * columnas) + j);
            if (valor < min) {
                min = valor;
            }
        }
    }
    return min;
}

float calcularTraza(float* matriz, int filas, int columnas) {
    if (filas != columnas) return 0;
    
    float sumaTraza = 0;
    for (int i = 0; i < filas; i++) {
        sumaTraza += *(matriz + (i * columnas) + i);
    }
    return sumaTraza;
}

void calcularTranspuesta(float* matriz, float* transpuesta, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            *(transpuesta + (j * filas) + i) = *(matriz + (i * columnas) + j);
        }
    }
}

bool esSimetrica(float* matriz, int filas, int columnas) {
    if (filas != columnas) return false;
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (*(matriz + (i * columnas) + j) != *(matriz + (j * columnas) + i)) {
                return false;
            }
        }
    }
    return true;
}
