#include<stdio.h>
#include<time.h>
//#include<dos.h>
#include<unistd.h>



// void main(){
int main(){

    //clrscr();

    ligar = time(NULL);

    data = localtime(&ligar);    
    
    ligar1 = 20;
    


    while (data != ligar1) {

    
        //horaagora = *localtime(&horario);    
        //printf("%02d:%02d:%02d\n",horaagora.tm_hour,horaagora.tm_min,horaagora.tm_sec);
        printf("ainda nao deu o horário, continuo aguardando\n");
        //delay(1000); temporizador funciona com o header dos.h
        sleep(100); //só funciona no linux

        
        //ligar = horaagora.tm_hour;
        //minuto = horaagora.tm_min;
        //segundo = horaagora.tm_sec;

        //printf("%d\n ",segundo);

        //horaagora.tm_sec = 00;

    
    

    }
    
    //aqui vai bloco que executa a ativacao do led
    printf("deu o horário encerro o programa\n");

}