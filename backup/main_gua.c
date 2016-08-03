

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **readFile(char filename[]){
    char line[100];
    char **list = malloc(100*sizeof(char*));//for 100 lines
    int i = 0;

    FILE *file = fopen(filename,  "r");  

    while (fgets (line, sizeof line, file)!= NULL && i < 100){
        list[i] = malloc(strlen(line) + 1);
        strcpy(list[i], line);
        ++i;
    }
    fclose(file);
    return list;
}

int main(int argc, char *argv[]){
    char **list = readFile(argv[1]);
    for (int i = 0; i<10; i++){
        printf("%s", list[i]);
    }
    //deallcate list[i], list
    return 0;
}


