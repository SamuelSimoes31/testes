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

    int *pi = NULL;

    pi = real(pi);
    pi[4] = 10;
    printf("%d\n",p[4]);
    free(pi);
	//free feio
    return 0;
}
