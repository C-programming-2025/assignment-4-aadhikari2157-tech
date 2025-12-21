#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);
    fclose(fp);

    printf("File has been written successfully");

    return 0;
}
