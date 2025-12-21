#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
