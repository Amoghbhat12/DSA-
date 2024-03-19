
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    FILE *file_ptr;
    int i, random_number;

    file_ptr = fopen("random_numbers.txt", "w");

    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    srand(time(NULL));
     int a=0;
     int b=100;
    for (i = 0; i < 10; i++) {
        random_number = rand()%(b-a+1);
        fprintf(file_ptr, "%d\n", random_number);
    }

    fclose(file_ptr);

    printf("Random numbers stored in file successfully!\n");

    return 0;
}

