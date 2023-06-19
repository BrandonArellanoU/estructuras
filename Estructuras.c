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
        gets(estructura_Alumno.nombre);
        printf("Direccion:");
        fflush(stdin);
        gets(estructura_Alumno.direccion);
        printf("Carrera:");
        fflush(stdin);
        gets(estructura_Alumno.carrera);
        printf("Edad:");
        fflush(stdin);
        scanf("%i",&estructura_Alumno.edad[i]);
        printf("Promedio:");
        fflush(stdin);
        scanf("%0.2f",&estructura_Alumno.promedio[i]);
    }     

    for (int i = 0; i < 2; i++)
    {
        printf("Datos del Alumno:\n",estructura_Alumno);

        puts(estructura_Alumno.nombre[2]);
        puts(estructura_Alumno.direccion[2]);
        puts(estructura_Alumno.carrera[2]);
        printf("%i\n", estructura_Alumno.edad[2]);
        printf("%0.2f\n", estructura_Alumno.promedio[2]);
    }
    

    return 0; 
}