#include<stdio.h>
#include"asminhaslib.h" 

void teste(){

    printf("consegui chamar a funcao teste\n");

}


int main(){

    printf("teste do printf\n");

    teste();
    teste2();
    teste3(1);

    printf("retorno da funcao 3: \n%d\n",teste3(5));

}