#include <stdio.h>
#include <stdlib.h>


int main(){
    int size = 3;

    int *ptr = (int*)malloc(3*sizeof(int));
    
    if(ptr == NULL){
        printf("erro na alocação de memoria. \n");
        return 1;
    }

    for(int i = 0; i < size; i++){
        printf("Digite um valor: ");
        scanf("%d", &ptr[i]);
        printf("\n");
    }

    printf("Os valores digitados foram: \n");
    for(int i = 0; i < size; i++){
        printf("%d \n", ptr[i]);
    }

    free(ptr);

    return 0;
}