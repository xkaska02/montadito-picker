#include <stdio.h>

#define FILENAME "montaditos-numbers.txt"
#define MAXSIZE 100
#define MAX_LINE_SIZE 4

int main(int argc, char * argv[]){
    
    FILE * fp;
    fp = fopen(FILENAME,"w");

    short montaditos[MAXSIZE];
    char * current;
    for (short i = 0; i < MAXSIZE; i++)
    {
        fprintf(fp, "%d\n", i+1);
    }
    
    
}