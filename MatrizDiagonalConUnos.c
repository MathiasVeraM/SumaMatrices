//Crear una matriz cuyas dimensiones sean dadas por el usuario, llenarla de ceros y luego imprimir la matriz con la diagonal principal llena de unos
#include<stdio.h>
int main(){
    //Definir e inicializar las variables a usar para pedir datos al usuario
    int filas=0, columnas=0, i, j;
    //Pedir datos
    printf("Por favor ingrese el numero de filas de la matriz: ");
    scanf("%d",&filas);
    printf("Por favor ingrese el numero de columnas de la matriz: ");
    scanf("%d",&columnas);
    //Le inicialice la matriz para que me sirva
    int Matriz[2][2];
    //Hacer el for para definir la matriz con ceros
    for(i=0;i<=filas;i++){
        for(j=0;j<=columnas;j++){
            Matriz[i][j]=0;
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }




    return 0;
}