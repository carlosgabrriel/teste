#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int tentativas = 6;

    char palavras [3][15] = {"planeta", "verde", "barco"};
    int numrand = rand()%3;
    char palavra_escolhida[15] ;
    strcpy(palavra_escolhida,palavras[numrand]);

    int tam = strlen(palavra_escolhida);
    char escolhas[tam + 1];

    for(int i = 0;i < tam;i++){
        escolhas[i] = '_';
    }
    escolhas[tam ] = '\0';

    printf("%s\n", palavra_escolhida);

    for(int i = 0; i <= tentativas; i++){
        char escolha;
        printf("escolha uma letra\n");
        scanf(" %c" , &escolha);
        
        for(int j = 0;j < tam;j++){
            if(escolha == palavra_escolhida[j]){
                escolhas[j] = escolha;
            }
        }
        printf("%s", escolhas);
    }    

   printf("%s", escolhas);
    
    

    return 0;
}
