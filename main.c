#include <stdio.h>
#define NUM 5
typedef struct{
    int edad;
    char nombre[15];
    char apellido[20];
}persona;

int avgEdad(persona a[]){
    int totalEdad;
    for(int i=0;i<NUM;i++){
        totalEdad+=a[i].edad;
    }
    return totalEdad/NUM;
}
char* younger(persona a[]){
    int minor=1000;
    int indice = 0;
    for(int i=0;i<NUM;i++){
        if(a[i].edad < minor){
            minor=a[i].edad;
            indice=i;
        }
    }
    
    return a[indice].nombre;
    
}
char* older(persona a[]){
    int maj=0;
    int indice=0;
    for(int i=0;i<NUM;i++){
        if(a[i].edad > maj){
            maj = a[i].edad;
            indice=i;
        }
    }
    return a[indice].nombre;
}

void findPeopleBetween(int minor,int maj,persona a[]){
    printf("Las personas con edad entre %d y %d son:\n",minor,maj);
    for(int i=0;i<NUM;i++){
        if(a[i].edad>=minor && a[i].edad<=maj){
            printf("--%s %s\n",a[i].nombre,a[i].apellido);
        }
    }
    
}
int main(){
    /*int numPersonas;
     printf("Introduce el numero de personas %s\n");
     scanf("%d",numPersonas);
     for(int i=0;i<){
     
     }*/
    persona arrayPersonas[5];
    //Edades
    arrayPersonas[0].edad=10;
    arrayPersonas[1].edad=20;
    arrayPersonas[2].edad=30;
    arrayPersonas[3].edad=40;
    arrayPersonas[4].edad=50;
    //Nombres
    strcpy(arrayPersonas[0].nombre,"Javier");
    strcpy(arrayPersonas[1].nombre,"Pablo");
    strcpy(arrayPersonas[2].nombre,"Sandra");
    strcpy(arrayPersonas[3].nombre,"Armando");
    strcpy(arrayPersonas[4].nombre,"Jose");
    //apellidos
    strcpy(arrayPersonas[0].apellido,"Gutierrez");
    strcpy(arrayPersonas[1].apellido,"Jimenez");
    strcpy(arrayPersonas[2].apellido,"Hernandez");
    strcpy(arrayPersonas[3].apellido,"Lopez");
    strcpy(arrayPersonas[4].apellido,"Gonzalez");
    
    
    printf("El más joven es: %s \n",younger(arrayPersonas));
    printf("El más viejo es: %s \n",older(arrayPersonas));
    printf("El promedio de edad es: %d \n",avgEdad(arrayPersonas));
    
    findPeopleBetween(10, 30, arrayPersonas);

    return 0;
}