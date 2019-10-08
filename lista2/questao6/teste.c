#include "arvore.c"
#include <stdlib.h>
#include <stdio.h>

int main(){
   int t ;
    Arvore* x = cria('a', NULL, NULL);
    Arvore* y = cria('b', NULL, NULL);
    Arvore* z = cria('c', x, y);
    imprime(z);
    imprime(x);
    
    t = pertence(z,'c');
    printf("%d\n", t);
    
    if (pertence(z, 'x')== 0){
        printf("Nao pertence\n");

    }else{
        printf("Item pertence a arvore\n");
    };

    if (pertence(z, 'a')== 0){
        printf("Nao pertence\n");

    }else{
        printf("Item pertence a arvore\n");
    }

    libera(&z);





    
}

