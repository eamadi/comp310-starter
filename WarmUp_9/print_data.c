#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";

    file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "Hello, World!");

    fclose(file);

    file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
