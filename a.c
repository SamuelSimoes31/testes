#include <stdio.h>
#include <stdlib.h>

void somaUm(int* num){
    (*num) += 1; 
}

int* real(int* p){
    p = (int*) realloc(p,5*sizeof(int));
    if(p==NULL){
        printf("Erro\n");
        exit(-1);
    }
    return p;
}

int main(){

    int *p = NULL;
    p = real(p);
    p[4] = 10;
    printf("%d\n",p[4]);
    free(p);
    return 0;
}