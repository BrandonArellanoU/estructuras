#include <stdio.h>
#include<string.h>

struct colecionEstructura 
    {
        char nombre[25];
        char direccion[50];
        char carrera[15];
        int edad; 
        float promedio;

    };

int main(){
     struct colecionEstructura estructura_Alumno[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Ingrese los datos del Alumno:\n");
        printf("Nombre:");
        fflush(stdin);
        gets(estructura_Alumno[i].nombre);
        printf("Direccion:");
        fflush(stdin);
        gets(estructura_Alumno[i].direccion);
        printf("Carrera:");
        fflush(stdin);
        gets(estructura_Alumno[i].carrera);
        printf("Edad:");
        fflush(stdin);
        scanf("%d",&estructura_Alumno[i].edad);
        printf("Promedio:");
        fflush(stdin);
        scanf("%f",&estructura_Alumno[i].promedio);
    }     

    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Datos del Alumno:\n",estructura_Alumno[i]);
        puts(estructura_Alumno[i].nombre);
        puts(estructura_Alumno[i].direccion);
        puts(estructura_Alumno[i].carrera);
        printf("%d\n",estructura_Alumno[i].edad);
        printf("%.2f",estructura_Alumno[i].promedio);
    }

    return 0; 
}