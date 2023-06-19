#include <stdio.h>

int main(){
    struct colecionEstructura 
    {
        char nombre[25];
        char direccion[50];
        char carrera[15];
        int edad; 
        float promedio;

    } estructura_Alumno = {"Brandon","Conocoto","software",21,8.5};

    printf("Datos del Alumno:\n",estructura_Alumno);
    printf("%s\n", estructura_Alumno.nombre);
    printf("%s\n", estructura_Alumno.direccion);
    printf("%s\n", estructura_Alumno.carrera);
    printf("%i\n", estructura_Alumno.edad);
    printf("%0.2f\n", estructura_Alumno.promedio); 

    for (int i = 0; i < 2; i++)
    {
        printf("%c ",estructura_Alumno.nombre[i]);
    }
    

    return 0; 
}