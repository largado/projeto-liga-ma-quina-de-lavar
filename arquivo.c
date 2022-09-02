#include<stdio.h>

int main(){

    FILE *arquivoDeLog;

    arquivoDeLog = fopen("logc.log","w");

    fprintf(arquivoDeLog,"teste para escrever no arquivo");






    fclose(arquivoDeLog);
}