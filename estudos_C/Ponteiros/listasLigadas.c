#include <stdio.h>

struct no {
    int valor;
    struct no* prox;
};

typedef struct no No;

void imprime_lista(No* q);

int main(){
    No* L;



return 0;
}

void imprime_lista(No* q) { //q recebe L
    while(q != NULL){
        printf("%d\n", q->valor);
        q = q->prox;
    }

}