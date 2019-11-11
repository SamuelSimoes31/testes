#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    int idade;
    char nome[30];
    int tamanho;
} Pessoa;

bool comparaNome(char *nome1, char *nome2){
    int tam1 = strlen(nome1), tam2 = strlen(nome2);
    int i=0, j=0;
    while(i<tam1 && j<tam2){
        if(nome1[i]<nome2[j]) return true;
        else if(nome1[i]>nome2[j]) return false;
        i++;j++;
    }
    if(i == tam1){
        return true;
    }
    else if(j == tam2){
        return false;
    }
    else{   
        return false;
    }
}

bool comparaTamanho(int tam1, int tam2){
    if(tam1<tam2){
        return true;
    }
    else{
        return false;
    }
}

bool comparaIdade(int idade1, int idade2){
    if(idade1<idade2){
        return true;
    }
    else{
        return false;
    }
}

void ordenaStruct(Pessoa *pessoa, int tam){
    for(int  i=0; i<tam; i++){
        int index = i;
        for(int j=i+1; j<tam; j++){
            /* if(comparaIdade(pessoa[j].idade, pessoa[index].idade)){
                index = j;
            }*/
            /*if(comparaTamanho(pessoa[j].tamanho, pessoa[index].tamanho)){
                index = j;
            }*/
            if(comparaNome(pessoa[j].nome, pessoa[index].nome)){
                index = j;
            }
        }
        Pessoa aux = pessoa[index];
        pessoa[index] = pessoa[i];
        pessoa[i] = aux;
    }
}

int main(){
    Pessoa *pessoa = NULL;
    const int tam = 5;
    pessoa = (Pessoa *) malloc(tam*sizeof(Pessoa));
    for(int i=0; i<tam; i++){
        printf("Entre com o nome da %d pessoa\n", i+1);
        scanf(" %s", pessoa[i].nome);
        printf("Entre com sua idade\n");
        scanf("%d", &pessoa[i].idade);
        printf("Entre com seu tamanho\n");
        scanf("%d", &pessoa[i].tamanho);
    }
    ordenaStruct(pessoa, tam);
    for(int i=0; i<tam; i++){
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("Tamanho: %d\n", pessoa[i].tamanho);
    }

}