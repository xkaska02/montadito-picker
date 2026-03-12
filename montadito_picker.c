#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <time.h>

#define FILENAME "./montaditos-numbers.txt"
#define MAXSIZE 100
#define MAX_LINE_SIZE 4
#define CHOICES_SIZE 4 // how many to pick

/**
 * @brief returns random index from array and decrements the size
 * 
 * @param size of array from which to pick 
 * @return int 
 */
int pick_one(short *size){
    srand(time(NULL));
    (*size)--;
    return (rand() % *size) + 1;
}

/**
 * @brief removes the array member at index and moves the remaining members to the left, padding with -1 from right
 * 
 * @param index 
 * @param arr
 * @param size array size
 * @return int does not do anything maybe error code in the future 
 */
int remove_one(short index, short * arr, short *size){
    short res = arr[index-1];
    // printf("RETURN %d  ==================", arr[index-1]);
    for (short i = index-1; i < (*size); i++)
    {
        if(arr[i] != -1)
            arr[i] = arr[i+1];
    }
    arr[(*size)-1] = -1;
    return res;
    // printf("remove one print\n");
    // for (short i = 0; i < *size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    

    return 0;    
}

/**
 * @brief writes the remaining choices into the file for persistency
 * 
 * @param fp pointer to file with write access
 * @param arr 
 * @return int 
 */
int update_textfile(FILE * fp, short * arr, short size){
    // printf("UPDATE TEXT FILE: ");
    for (short i = 0; i < size; i++)
    {
        fprintf(fp, "%d\n", arr[i]);
        // printf("%d ", arr[i]);

    }
    
    return 0;
}

int main(int argc, char * argv[]){
    
    FILE * fp;
    fp = fopen(FILENAME,"r");

    short montaditos[MAXSIZE];
    short remaining = 0;
    char current[MAX_LINE_SIZE];
    char ** check = malloc(sizeof(char) * MAX_LINE_SIZE); // this size is if strtol did not read number and returned whole line
    short choices[CHOICES_SIZE];
    short results[CHOICES_SIZE];

    // load remaining options from file
    for (short i = 0; i < MAXSIZE; i++)
    {
        fgets(current, MAX_LINE_SIZE, fp);
        
        errno = 0;
        montaditos[i] = strtol(current, check, 10);

        if(errno){
            printf("err when strtol exiting\n");
            return 1;
        }

        remaining += 1;
    }

    printf("%d remaining\n",remaining);
    fclose(fp); // reading done

    for (short i = 0; i < CHOICES_SIZE; i++)
    {
        choices[i] = pick_one(&remaining);
        results[i] = remove_one(choices[i], montaditos, &remaining);
    }
    fp = fopen(FILENAME, "w");
    update_textfile(fp, montaditos, remaining);

    printf("Today's choice: ");

    for (short i = 0; i < CHOICES_SIZE; i++)
    {
        printf("%d ", results[i]);
    }

    printf("\n");
    return 0;
}