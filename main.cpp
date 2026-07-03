#include <iostream>
#include "lab8.h"

using namespace std;

int main() {
    
    float datos[] = {10.0, 12.0, 15.0, 14.0, 11.0, 18.0, 13.0};
    int tamano = sizeof(datos) / sizeof(datos[0]);

    float media = calcularMedia(datos, tamano);
    float varianza = calcularVarianza(datos, tamano, media);
    float desviacion = calcularDesviacion(varianza);
    float curtosis = calcularCurtosis(datos, tamano, media, desviacion);
    float maximo = obtenerMaximo(datos, tamano);
    float minimo = obtenerMinimo(datos, tamano);

    cout << "EJERCICIO 1" << endl;
    cout << "Media: " << media << endl;
    cout << "Varianza: " << varianza << endl;
    cout << "Desviacion Estandar: " << desviacion << endl;
    cout << "Curtosis: " << curtosis << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    
    //ejercicio 2
    int filas = 3, columnas = 3;
    
    float miMatriz[3][3] = {
        {2, -1, 3},
        {-1, 4, 5},
        {3, 5, 6}
    };
    
    float transpuesta[3][3];
    float* ptrMatriz = &miMatriz[0][0];
    float* ptrTranspuesta = &transpuesta[0][0];

    cout << "EJERCICIO 2" << endl;
    cout << "Elemento Maximo: " << obtenerMaximoMatriz(ptrMatriz, filas, columnas) << endl;
    cout << "Elemento Minimo: " << obtenerMinimoMatriz(ptrMatriz, filas, columnas) << endl;
    cout << "Traza de la matriz: " << calcularTraza(ptrMatriz, filas, columnas) << endl;
    
    if (esSimetrica(ptrMatriz, filas, columnas)) {
        cout << "La matriz es: Simetrica" << endl;
    } else {
        cout << "La matriz es: No Simetrica" << endl;
    }

    calcularTranspuesta(ptrMatriz, ptrTranspuesta, filas, columnas);
    
    cout << "\nMatriz Transpuesta:" << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
