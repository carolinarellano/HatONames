#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_LINE_SIZE 255

int main(int argc, char *argv[])
{
    srand(time(NULL));
    FILE *descriptor_de_archivo = NULL;
    descriptor_de_archivo = fopen("C:\\Users\\arell\\code\\HatONames\\Names", "r");

    if(descriptor_de_archivo == NULL)
    {
        printf("Couldn't read the names' file \n");
        return 0xF0;
    }

    printf("Hello, use h to get the names of the hat :)\n");

    int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                       16,17,18,19,20,21,22,23,24,25};

    int temp, randomIndex;

    for (int k = 0; k < 25; k++) {    // shuffle array
        temp = numbers[k];
        randomIndex = rand() % 25;
        numbers[k] = numbers[randomIndex];
        numbers[randomIndex] = temp;
    }

    char buffer[MAX_LINE_SIZE];

    for(int i = 0; i < 26; i++)
    {
        int choice = fgetc(stdin);
        fgetc(stdin);

        if(choice != 'h'){
            printf("Wrong character, try again\n");
            fgetc(stdin);
            //return 40;
        }

        for(int j = 0; j < numbers[i] ; j++)
        {
            fgets(buffer, MAX_LINE_SIZE, descriptor_de_archivo);
        }

        printf("%s", buffer);

        rewind(descriptor_de_archivo);
    }

    printf("No more names in the hat");

    return 0;
}
