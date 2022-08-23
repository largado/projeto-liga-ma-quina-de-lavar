#include<stdio.h>
#include<time.h>
#include<unistd.h>



//#inc1ude<time.h> 
//#include <stdio.h>
//#include <dos.h>

int main(void){

    time_t timer; 
    struct tm *tblock;
    
    while ( 3 == 3)
    {
        timer =time(NULL);
        tblock = localtime(&timer);
        printf("Local time is: %s", asctime(tblock));
        sleep(10);
    }
    
    

    return 0;

}