#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_SIZE 255

int inicio(int choice);
int choice;

int main(int argc, char *argv[])
{
    FILE *descriptor_de_archivo = NULL;
    descriptor_de_archivo = fopen("../Names", "r");

    if(descriptor_de_archivo == NULL)
    {
        printf("no se pudo abrir el archivo\n");
        return 0xF0;
    }

    choice = fgetc(stdin);

    do{
        choice = inicio();
    }
}

int inicio(){
    if(choice != 'g'){
        printf("Error");
        return 40;
    }
    else{
        fgets(desc)
        return 1;
    }
}