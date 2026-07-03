#ifndef Lab8_H
#define Lab8_H

// ejercicio 1
float calcularMedia(float arreglo[], int tamano);
float calcularVarianza(float arreglo[], int tamano, float media);
float calcularDesviacion(float varianza);
float calcularCurtosis(float arreglo[], int tamano, float media, float desviacion);
float obtenerMaximo(float arreglo[], int tamano);
float obtenerMinimo(float arreglo[], int tamano);

// ejercicio 2 
float obtenerMaximoMatriz(float* matriz, int filas, int columnas);
float obtenerMinimoMatriz(float* matriz, int filas, int columnas);
float calcularTraza(float* matriz, int filas, int columnas);
void calcularTranspuesta(float* matriz, float* transpuesta, int filas, int columnas);
bool esSimetrica(float* matriz, int filas, int columnas);

// ejercicio 3
void obtenerSiglas(char cadena[], char resultado[]);
int stringAIntManual(char cadena[]);
char caracterMasRepetido(char cadena[]);

#endif
