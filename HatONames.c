#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_SIZE 255

int main(int argc, char *argv[])
{
    FILE *descriptor_de_archivo = NULL;
    descriptor_de_archivo = fopen("../Names", "r");

    if(descriptor_de_archivo == NULL)
    {
        printf("no se pudo abrir el archivo\n");
        return 0xF0;
    }

    int random, count;
    char buffer[MAX_LINE_SIZE];
    count = 0;

    for(int i = 0; i < 26; i++)
    {
        int choice = fgetc(stdin);
        fgetc(stdin);
        random = rand() % 26;
        if(choice != 'g'){
            printf("Error");
            return 40;
        }
        for(int i = 0; i < random; i++)
        {
            fgets(buffer, MAX_LINE_SIZE, descriptor_de_archivo);
        }
        printf("%s", buffer);
        count++;
        rewind(descriptor_de_archivo);
    };

    return 0;
}
