#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char* argv[]){
    int time_to_sleep = atoi(argv[1]);
    printf("Time to sleep : %d\n", time_to_sleep);
    printf(": sleeping for %d\n)", (time_to_sleep+1)*10);
    sleep((time_to_sleep+1)*10);
    exit(1);
}
