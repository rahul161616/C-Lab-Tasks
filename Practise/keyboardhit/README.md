#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int num,upper = 9,lower = 0;

    game:
       srand(time(NULL));  //time(NULL) creates a new random number on each execution
       num =  (rand()%(upper - lower + 1)) + lower;  // range of random numbers i.e here from 1 to 10;
        printf("\n"); //new line
               for (i=5;i>0;i--){
               printf("\rProcessing the results in..(%d)",i);
                       Sleep(300);
}
}
