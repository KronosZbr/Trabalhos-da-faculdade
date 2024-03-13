#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int cpu;
    srand(time(NULL));
    cpu = 11111111 + rand() % 99999999;
    printf("%i", cpu);

}


