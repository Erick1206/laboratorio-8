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

    cout << "=== RESULTADOS EJERCICIO 1 ===" << endl;
    cout << "Media: " << media << endl;
    cout << "Varianza: " << varianza << endl;
    cout << "Desviacion Estandar: " << desviacion << endl;
    cout << "Curtosis: " << curtosis << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}
