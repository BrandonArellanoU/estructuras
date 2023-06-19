#include <stdio.h>
#include<string.h>

struct colecionEstructura 
    {
        char nombre[25];
        char direccion[50];
        char carrera[15];
        int edad[5]; 
        float promedio[5];

    };

int main(){
     struct colecionEstructura estructura_Alumno[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Ingrese los datos del Alumno:\n");
        printf("Nombre:");
        fflush(stdin);
        gets(estructura_Alumno->nombre);
        printf("Direccion:");
        fflush(stdin);
        gets(estructura_Alumno->direccion);
        printf("Carrera:");
        fflush(stdin);
        gets(estructura_Alumno->carrera);
        printf("Edad:");
        fflush(stdin);
        scanf("%i",&estructura_Alumno->edad);
        printf("Promedio:");
        fflush(stdin);
        scanf("%0.2f",&estructura_Alumno->promedio);
    }     

    for (int i = 0; i < 2; i++)
    {
        printf("Datos del Alumno:\n",estructura_Alumno[i]);
        puts(estructura_Alumno->nombre);
        puts(estructura_Alumno->direccion);
        puts(estructura_Alumno->carrera);
        puts(estructura_Alumno->edad);
        puts(estructura_Alumno->promedio);
    }
    

    return 0; 
}