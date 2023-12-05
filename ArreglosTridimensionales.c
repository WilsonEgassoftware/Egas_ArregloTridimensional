#include <stdio.h>

int main() {
    int dim1, dim2, dim3;// delcaramos los datos de las 3 dimensiones que usaremos 

    // Pedimos el ingreso de los datos que tomara el usuario que sean a gusto
    printf("Ingrese la primera dimension:");
    scanf("%d", &dim1);
    printf("Ingrese la segunda dimension:");
    scanf("%d", &dim2);
    printf("Ingrese la tercera dimension");
    scanf("%d", &dim3);
    int arreglo[dim1][dim2][dim3];// declaramos el arreglo que usaremos como entero de las 3 dimensiones 
    // tomaremos como si fuera una funcion para poder declararlo
    // Comenzamos la declaracion las matrices en ceros
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {//verifiacacion de las 3 dimensiones con i,j,k para poder entenderlo
                arreglo[i][j][k] = 0;// el arreglo final lo igualamos a 0 para obtener las 3 dimensiones sugeridas
            }
        }
    }
    //Comenzamos a poder declarar la matriz en unos
    for (int j = 0; j < dim2; j++) {
        for (int k = 0; k < dim3; k++) {
            arreglo[dim1-1][j][k] = 1;// lo datos de la primera dimension los igualamos a 1
        } // restamos un valor de la dimension aparte de los otroa datos que seran igualados a 1 
    }
    // Comenzamos a imprimir todos los elementos del arreglo usando un salto de lineal
    printf("Elementos del arreglo tridimensional:\n");
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                printf("%d ", arreglo[i][j][k]);// pedimos imrimir en pantalla los datos  del arreglo
            }
            printf("\n");// reliazamos un salto de linea para un mejor orden
        }
        printf("\n");
    }

    return 0;
}
