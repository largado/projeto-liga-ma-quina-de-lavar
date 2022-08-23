#include<stdio.h>
#include<time.h>
#include<unistd.h>



//#inc1ude<time.h> 
//#include <stdio.h>
//#include <dos.h>

int main(void){

    time_t timer; 
    time_t relogio;
    struct tm *hora;
    struct tm *tblock;
    int parar = 23;
    int agora = 0;

    while ( agora != parar)
    {
        relogio = time(NULL);
        timer = time(NULL);
        hora = localtime(&relogio);
        tblock = localtime(&timer);
        printf("horário completo: %s\n", asctime(tblock));
        printf("hora de agora:  %d\n", hora->tm_hour);
        agora = hora->tm_hour;
        sleep(10);
    }

    printf("j[a deu o hor[ario pulei fora do la;co whilen\n");
    
    return 0;

}