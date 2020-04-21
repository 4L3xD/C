# include <stdio.h>
# include <string.h>

void main(){

    char aux[10000] = "\0";
    char fileText[10000] = "\0";
    FILE* fp = fopen("./math.txt", "r");

    while (fscanf(fp, "%[^\n]\n", &aux) != EOF) {
        strcat(fileText, aux);
        strcat(fileText, "\n\n");
    }
    printf("%s\n", fileText);

}


