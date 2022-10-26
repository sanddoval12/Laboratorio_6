#include <stdio.h> //David Alejandro Sandoval Quijano 00379422
#include <string.h>

int funcion(char *letra){
    int x = 0;
    int y = strlen(letra) -1; //el tamaño de la palabra menos 1
    int xd, yd;

    for(int i = 0; i < strlen(letra); i++){
        xd = letra[x];
        yd = letra[y];

        if(xd == yd){
            xd++; //uno aumenta, mientras uno disminuye cada letra
            yd--;
        }
        else{
            return 0; //si es falso, retorna cero
        }
    }
    return 1; //si es verdadero, retorna uno
}
int main(){

    char letra[15];
    
    printf("Ingrese una palabra cualquiera: ");
    scanf("%s", letra);
    printf("Usted ha escrito %s\n", letra);
    if(funcion(letra) ==1){
        printf("La palabra es palindromo");
    }
    else{
        printf("La palabra NO es palindromo");
    }
    
    return 0;
}