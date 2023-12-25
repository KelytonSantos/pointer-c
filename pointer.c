#include <stdio.h>
#include <stdlib.h>


int main(){
    int size = 3;

    int *ptr = (int*)malloc(3*sizeof(int));
    
    if(ptr == NULL){
        printf("erro na alocação de memoria. \n");
        return 1;
    }

    printf("Digite 3 valores: \n");
    for(int i = 0; i < size; i++){
        scanf("%d", ptr + i);
    }

    printf("valores escritos: \n");
    for(int i; i < size; i++){

        printf("%d\n", *(ptr + i));
    }

    return 0;
}

//&p[i] isso vai APONTAR para o primeiro endereço do meu array dinamico
//scanf("%d", &p[i]);