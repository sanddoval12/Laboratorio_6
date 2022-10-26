#include <stdio.h> //David Alejandro Sandoval Quijano 00379422
#include <stdlib.h>

int main(int argc, char **argv){
    
    char texto[20];
    char palabra[10];
    char *resultado; //es necesario un puntero para el strstr
    printf("Ingrese un texto cualquiera sin espacios: ");
    scanf("%s", texto);
    printf("Usted ha escrito %s", texto);
    printf("\n");
    printf("Que palabra desea buscar: ");
    scanf("%s", palabra);
    printf("Usted ha escrito %s", palabra);
    printf("\n");
    resultado = strstr(texto, palabra); //no se exactamente como funciona el strstr, pero supongo que compara cadenas
    if(resultado){
        printf("La palabra fue encontrada");
    }
    else{
        printf("La palabra NO fue encontrada");
    }

    return 0;
}